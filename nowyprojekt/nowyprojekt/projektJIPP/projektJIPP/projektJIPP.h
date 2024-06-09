#pragma once

#include <QtWidgets/QMainWindow>
#include <vector>
#include "ui_projektJIPP.h"
#include "student.h"
#include "kolejka.h"

class projektJIPP : public QMainWindow
{
    Q_OBJECT

public:
    projektJIPP(QWidget* parent = nullptr);
    ~projektJIPP();

private:
    Ui::projektJIPPClass ui;
    Kolejka kolejka; // Kolejka przechowuj¹ca studentów


private slots:
    void wyswietlMainWindow();
    void wyswietlManageWindow();
    void wyswietlViewWindow();

    void sortujListeStudentow();
    void wyszukajStudentaPoDanych();
    void aktualizujListeStudentow();
    void aktualizujListeStudentow(const std::vector<Student>& studenci);
    void on_dodajButton_clicked();
    void on_saveButton_clicked();
    void on_removeButton_clicked();
    void policzElementyKolejki();

};

