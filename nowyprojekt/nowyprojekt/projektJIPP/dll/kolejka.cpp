#include "kolejka.h"
#include "student.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>


Kolejka::Kolejka() : front(nullptr), rear(nullptr) {}

Kolejka::~Kolejka()
{
    Node* current = front;
    while (current != nullptr)
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void Kolejka::dodaj(Student student)
{
    Node* newStudent = new Node(student);

    if (rear == nullptr)
    {
        front = newStudent;
        rear = newStudent;
    }
    else
    {
        rear->next = newStudent;
        rear = newStudent;
    }

    std::cout << "Dodano studenta do ksi¹¿ki adresowej." << std::endl;
}

int Kolejka::policz() const
{
    int count = 0;
    Node* current = front;

    while (current != nullptr)
    {
        count++;
        current = current->next;
    }

    return count;
}

std::vector<Student> Kolejka::znajdzPoNazwisku(const std::string& nazwisko) const
{
    std::vector<Student> znalezieniStudenci;

    Node* current = front;
    while (current != nullptr)
    {
        if (current->data.getNazwisko() == nazwisko)
        {
            znalezieniStudenci.push_back(current->data);
        }
        current = current->next;
    }

    return znalezieniStudenci;
}



std::vector<Student> Kolejka::znajdzPoImieniu(const std::string& imie) const
{
    std::vector<Student> znalezieniStudenci;

    Node* current = front;
    while (current != nullptr)
    {
        if (current->data.getImie() == imie)
        {
            znalezieniStudenci.push_back(current->data);
        }
        current = current->next;
    }

    return znalezieniStudenci;
}


std::vector<Student> Kolejka::znajdzPoDacieUrodzenia(int dzien, int miesiac, int rok) const
{
    std::vector<Student> foundStudents;

    Node* current = front;

    while (current != nullptr)
    {
        if (current->data.getDzienUrodzenia() == dzien && current->data.getMiesiacUrodzenia() == miesiac && current->data.getRokUrodzenia() == rok)
        {
            foundStudents.push_back(current->data);
        }
        current = current->next;
    }

    return foundStudents;
}

std::vector<Student> Kolejka::znajdzPoNumerzeTelefonu(const std::string& numer_telefonu) const
{
    std::vector<Student> znalezieniStudenci;

    Node* current = front;
    while (current != nullptr)
    {
        if (current->data.getNumerTelefonu() == numer_telefonu)
        {
            znalezieniStudenci.push_back(current->data);
        }
        current = current->next;
    }

    return znalezieniStudenci;
}

void Kolejka::sortujPoNazwisku()
{
    std::vector<Student> students;
    Node* current = front;

    while (current != nullptr)
    {
        students.push_back(current->data);
        current = current->next;
    }

    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b)
        {
            return a.getNazwisko() < b.getNazwisko();
        });

    current = front;
    for (const auto& student : students)
    {
        current->data = student;
        current = current->next;
    }

    std::cout << "Ksi¹¿ka adresowa zosta³a posortowana po nazwisku." << std::endl;
}

void Kolejka::sortujPoImieniu()
{
    std::vector<Student> students;
    Node* current = front;

    while (current != nullptr)
    {
        students.push_back(current->data);
        current = current->next;
    }

    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b)
        {
            return a.getImie() < b.getImie();
        });

    current = front;
    for (const auto& student : students)
    {
        current->data = student;
        current = current->next;
    }

    std::cout << "Ksi¹¿ka adresowa zosta³a posortowana po imieniu." << std::endl;
}

void Kolejka::sortujPoDacieUrodzenia()
{
    std::vector<Student> students;
    Node* current = front;

    while (current != nullptr)
    {
        students.push_back(current->data);
        current = current->next;
    }

    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b)
        {
            if (a.getRokUrodzenia() != b.getRokUrodzenia())
            {
                return a.getRokUrodzenia() < b.getRokUrodzenia();
            }

            if (a.getMiesiacUrodzenia() != b.getMiesiacUrodzenia())
            {
                return a.getMiesiacUrodzenia() < b.getMiesiacUrodzenia();
            }

            return a.getDzienUrodzenia() < b.getDzienUrodzenia();
        });

    current = front;
    for (const auto& student : students)
    {
        current->data = student;
        current = current->next;
    }

    std::cout << "Ksi¹¿ka adresowa zosta³a posortowana po dacie urodzenia." << std::endl;
}

void Kolejka::wyswietlPosortowanePoNazwisku() const
{
    std::vector<Student> students;
    Node* current = front;

    while (current != nullptr)
    {
        students.push_back(current->data);
        current = current->next;
    }

    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b)
        {
            return a.getNazwisko() < b.getNazwisko();
        });

    for (const auto& student : students)
    {
        student.wyswietl();
    }
}

void Kolejka::wyswietlPosortowanePoImieniu() const
{
    std::vector<Student> students;
    Node* current = front;

    while (current != nullptr)
    {
        students.push_back(current->data);
        current = current->next;
    }

    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b)
        {
            return a.getImie() < b.getImie();
        });

    for (const auto& student : students)
    {
        student.wyswietl();
    }
}

void Kolejka::wyswietlPosortowanePoDacieUrodzenia() const
{
    std::vector<Student> students;
    Node* current = front;

    while (current != nullptr)
    {
        students.push_back(current->data);
        current = current->next;
    }

    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b)
        {
            if (a.getRokUrodzenia() != b.getRokUrodzenia())
            {
                return a.getRokUrodzenia() < b.getRokUrodzenia();
            }

            if (a.getMiesiacUrodzenia() != b.getMiesiacUrodzenia())
            {
                return a.getMiesiacUrodzenia() < b.getMiesiacUrodzenia();
            }

            return a.getDzienUrodzenia() < b.getDzienUrodzenia();
        });

    for (const auto& student : students)
    {
        student.wyswietl();
    }
}

void Kolejka::zapiszDoPliku(const std::string& nazwaPliku) const
{
    std::ofstream plik(nazwaPliku);

    if (!plik.is_open())
    {
        std::cerr << "B³¹d otwarcia pliku." << std::endl;
        return;
    }

    Node* current = front;

    while (current != nullptr)
    {
        plik << current->data.getImie() << " " << current->data.getNazwisko() << " " << current->data.getDzienUrodzenia() << " " << current->data.getMiesiacUrodzenia() << " " << current->data.getRokUrodzenia() << " " << current->data.getNumerTelefonu() << std::endl;
        current = current->next;
    }

    plik.close();
    std::cout << "Dane zosta³y zapisane do pliku: " << nazwaPliku << std::endl;
}

void Kolejka::usunPoNumerzeTelefonu(const std::string& numer_telefonu)
{
    if (front == nullptr)
    {
        std::cout << "Ksi¹¿ka adresowa jest pusta." << std::endl;
        return;
    }

    Node* current = front;
    Node* prev = nullptr;

    if (front->data.getNumerTelefonu() == numer_telefonu)
    {
        Node* temp = front;
        front = front->next;

        if (front == nullptr)
        {
            rear = nullptr;
        }

        delete temp;

        std::cout << "Usuniêto studenta z podanym numerem telefonu." << std::endl;
        return;
    }

    while (current != nullptr && current->data.getNumerTelefonu() != numer_telefonu)
    {
        prev = current;
        current = current->next;
    }

    if (current != nullptr)
    {
        prev->next = current->next;

        if (current == rear)
        {
            rear = prev;
        }

        delete current;

        std::cout << "Usuniêto studenta z podanym numerem telefonu." << std::endl;
    }
    else
    {
        std::cout << "Nie znaleziono studenta o podanym numerze telefonu." << std::endl;
    }
}

