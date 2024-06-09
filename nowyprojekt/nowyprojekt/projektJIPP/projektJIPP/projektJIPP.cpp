#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include "projektJIPP.h"
#include "kolejka.h"
#include "student.h"

projektJIPP::projektJIPP(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.viewTableWidget->setColumnCount(6);
    QStringList headers = { "Name", "Surname", "Birth day","Birth month","Birth year", "Phone number" };
    ui.viewTableWidget->setHorizontalHeaderLabels(headers);
    ui.rokUrodzeniaSpinBox->setRange(1900, 2100);
    ui.dzienUrodzeniaSpinBox->setRange(1, 31);
    ui.miesiacUrodzeniaSpinBox->setRange(1, 12);
    aktualizujListeStudentow();
}

projektJIPP::~projektJIPP()
{}
void projektJIPP::wyswietlMainWindow() {
    
    ui.stackedWidget->setCurrentWidget(ui.MainPage);
}
void projektJIPP::wyswietlManageWindow() {
    ui.stackedWidget->setCurrentWidget(ui.managePage);
}

void projektJIPP::wyswietlViewWindow() {
    ui.stackedWidget->setCurrentWidget(ui.viewPage); 
}
void projektJIPP::aktualizujListeStudentow(const std::vector<Student>& studenci) {
    ui.viewTableWidget->setRowCount(0);

    for (const auto& student : studenci) {
        int row = ui.viewTableWidget->rowCount();
        ui.viewTableWidget->insertRow(row);
        ui.viewTableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(student.getImie())));
        ui.viewTableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(student.getNazwisko())));
        ui.viewTableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(student.getDzienUrodzenia())));
        ui.viewTableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(student.getMiesiacUrodzenia())));
        ui.viewTableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(student.getRokUrodzenia())));
        ui.viewTableWidget->setItem(row, 5, new QTableWidgetItem(QString::fromStdString(student.getNumerTelefonu())));
    }
}
void projektJIPP::aktualizujListeStudentow() {
    ui.viewTableWidget->setRowCount(0);

    Kolejka::Node* current = kolejka.getFront();
    while (current != nullptr) {
        int row = ui.viewTableWidget->rowCount();
        ui.viewTableWidget->insertRow(row);

        ui.viewTableWidget->setItem(row, 0, new QTableWidgetItem(QString::fromStdString(current->data.getImie())));
        ui.viewTableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(current->data.getNazwisko())));
        ui.viewTableWidget->setItem(row, 2, new QTableWidgetItem(QString::number(current->data.getDzienUrodzenia())));
        ui.viewTableWidget->setItem(row, 3, new QTableWidgetItem(QString::number(current->data.getMiesiacUrodzenia())));
        ui.viewTableWidget->setItem(row, 4, new QTableWidgetItem(QString::number(current->data.getRokUrodzenia())));
        ui.viewTableWidget->setItem(row, 5, new QTableWidgetItem(QString::fromStdString(current->data.getNumerTelefonu())));

        current = current->next;
    }
}

#include "projektJIPP.h"
#include "ui_projektJIPP.h"
#include <QMessageBox>
#include "Student.h"

void projektJIPP::on_dodajButton_clicked()
{
    // Pobranie danych wprowadzonych przez u¿ytkownika z pól tekstowych lub pól wyboru
    QString imie = ui.imieLineEdit->text();
    QString nazwisko = ui.nazwiskoLineEdit->text();
    int dzienUrodzenia = ui.dzienUrodzeniaSpinBox->value();
    int miesiacUrodzenia = ui.miesiacUrodzeniaSpinBox->value();
    int rokUrodzenia = ui.rokUrodzeniaSpinBox->value();
    QString numerTelefonu = ui.numerTelefonuLineEdit->text();

    try {
        // Tworzenie obiektu Student z pobranych danych
        Student student(imie.toStdString(), nazwisko.toStdString(), dzienUrodzenia, miesiacUrodzenia, rokUrodzenia, numerTelefonu.toStdString());

        // Dodanie studenta do kolejki
        kolejka.dodaj(student);

        // Aktualizacja listy studentów w interfejsie u¿ytkownika
        aktualizujListeStudentow();

        // Wyczyszczenie pól tekstowych i pól wyboru
        ui.imieLineEdit->clear();
        ui.nazwiskoLineEdit->clear();
        ui.dzienUrodzeniaSpinBox->setValue(1);
        ui.miesiacUrodzeniaSpinBox->setValue(1);
        ui.rokUrodzeniaSpinBox->setValue(1900);
        ui.numerTelefonuLineEdit->clear();

    }
    catch (const std::invalid_argument& e) {
        // Wyœwietlenie komunikatu o b³êdzie, jeœli wprowadzono nieprawid³owe dane
        QMessageBox::critical(this, "Error", e.what());
    }
    catch (const std::exception& e) {
        // Wyœwietlenie komunikatu o b³êdzie, jeœli wyst¹pi³ inny nieoczekiwany b³¹d
        QMessageBox::critical(this, "Error", "Not expected error.");
    }
}


void projektJIPP::sortujListeStudentow() {
    // Pobierz wybran¹ opcjê z QComboBox
    QString wybranaOpcja = ui.sortComboBox->currentText();

    if (wybranaOpcja == "surname") {
        kolejka.sortujPoNazwisku();
    }
    else if (wybranaOpcja == "name") {
        kolejka.sortujPoImieniu();
    }
    else if (wybranaOpcja == "birth date") {
        kolejka.sortujPoDacieUrodzenia();
    }

    aktualizujListeStudentow();
}

void projektJIPP::wyszukajStudentaPoDanych() {
    // Get the selected option from QComboBox
    QString selectedOption = ui.searchComboBox->currentText();
    QString data = ui.searchDataInput->text();
    std::vector<Student> foundStudents;

    if (selectedOption == "surname") {
        foundStudents = kolejka.znajdzPoNazwisku(data.toStdString());
    }
    else if (selectedOption == "name") {
        foundStudents = kolejka.znajdzPoImieniu(data.toStdString());
    }
    else if (selectedOption == "phone number") {
        foundStudents = kolejka.znajdzPoNumerzeTelefonu(data.toStdString());
    }
    else if (selectedOption == "birth date") {
        // Split the data into day, month, and year
        QStringList parts = data.split('.');
        if (parts.size() == 3) {
            bool conversionOk = false;
            int day = parts[0].toInt(&conversionOk);
            if (!conversionOk || day < 1 || day > 31) {
                QMessageBox::information(this, "Invalid date", "Date must be in the format 'Day.Month.Year'. Please provide valid values.");
                return;
            }
            int month = parts[1].toInt(&conversionOk);
            if (!conversionOk || month < 1 || month > 12) {
                QMessageBox::information(this, "Invalid date", "Date must be in the format 'Day.Month.Year'. Please provide valid values.");
                return;
            }
            int year = parts[2].toInt(&conversionOk);
            if (!conversionOk || year < 1900 || year > 2100) {
                QMessageBox::information(this, "Invalid date", "Date must be in the format 'Day.Month.Year'. Please provide valid values.");
                return;
            }
            foundStudents = kolejka.znajdzPoDacieUrodzenia(day, month, year);
        }
        else {
            QMessageBox::information(this, "Invalid date", "Date must be in the format 'Day.Month.Year'. Please provide valid values.");
            return;
        }
    }

    // Display information about found students in a QMessageBox
    if (!foundStudents.empty()) {
        QString message = "Found Students:\n";
        for (const auto& student : foundStudents) {
            message += QString("Name: %1\nSurname: %2\nBirth date: %3.%4.%5\nPhone number: %6\n\n")
                .arg(QString::fromStdString(student.getImie()))
                .arg(QString::fromStdString(student.getNazwisko()))
                .arg(student.getDzienUrodzenia())
                .arg(student.getMiesiacUrodzenia())
                .arg(student.getRokUrodzenia())
                .arg(QString::fromStdString(student.getNumerTelefonu()));
        }
        QMessageBox::information(this, "Students Found", message);
    }
    else {
        QMessageBox::information(this, "No Students Found", "No students found with the provided data.");
    }
}

void projektJIPP::on_saveButton_clicked() {
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), "", tr("Text Files (*.txt);;All Files (*)"));
    if (fileName.isEmpty())
        return;

    kolejka.zapiszDoPliku(fileName.toStdString()); // Wywo³anie funkcji zapisuj¹cej do pliku z kolejki

    QMessageBox::information(this, tr("Information"), tr("Data saved to file: ") + fileName);
}

void projektJIPP::on_removeButton_clicked()
{
    // Pobierz numer telefonu wprowadzony przez u¿ytkownika
    QString numerTelefonu = ui.numerTelefonuLineEdit->text();

    // SprawdŸ, czy wprowadzony numer telefonu jest pusty
    if (numerTelefonu.isEmpty())
    {
        QMessageBox::critical(this, "Error", "Empty phone number.");
        return;
    }

    // Wywo³aj funkcjê usuwania studenta z kolejki na podstawie numeru telefonu
    kolejka.usunPoNumerzeTelefonu(numerTelefonu.toStdString());

    // Jeœli funkcja zwróci³a prawdê, oznacza to, ¿e student zosta³ usuniêty
    // W takim przypadku wyœwietl komunikat o sukcesie
    QMessageBox::information(this, "Success", "Student removed.");

    // Aktualizuj listê studentów w interfejsie u¿ytkownika
    aktualizujListeStudentow();

}

void projektJIPP::policzElementyKolejki() {
    int count = kolejka.policz();
    QString trescKomunikatu = "Number of elements: " + QString::number(count);
    QMessageBox::information(nullptr, "Element count", trescKomunikatu);
}