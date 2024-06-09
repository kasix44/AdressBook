#pragma once
#pragma once
#ifndef KOLEJKA_H
#define KOLEJKA_H

#include "API.h"
#include "student.h"
#include <vector>

class PROJECT_API Kolejka
{
public:
    struct Node
    {
        Student data;
        Node* next;
        Node(Student student) : data(student), next(nullptr) {}
    };

    Node* front;
    Node* rear;


    Kolejka();
    ~Kolejka();
    Node* getFront() const { return front; }


    void dodaj(Student student);
    int policz() const;
    std::vector<Student> znajdzPoNazwisku(const std::string& nazwisko) const;
    std::vector<Student> znajdzPoImieniu(const std::string& imie) const;
    std::vector<Student> znajdzPoNumerzeTelefonu(const std::string& numer_telefonu) const;
    std::vector<Student> znajdzPoDacieUrodzenia(int dzien, int miesiac, int rok) const;
    void sortujPoNazwisku();
    void sortujPoImieniu();
    void sortujPoDacieUrodzenia();
    void wyswietlPosortowanePoNazwisku() const;
    void wyswietlPosortowanePoImieniu() const;
    void wyswietlPosortowanePoDacieUrodzenia() const;
    void zapiszDoPliku(const std::string& nazwaPliku) const;
    void usunPoNumerzeTelefonu(const std::string& numer_telefonu);
};

#endif
