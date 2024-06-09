#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include "API.h"
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <regex>

class PROJECT_API Student
{
public:
    Student();
    Student(std::string imie, std::string nazwisko, int dzien, int miesiac, int rok, std::string numer_telefonu);
    ~Student();

    void wyswietl() const;
    std::string getImie() const;
    std::string getNazwisko() const;
    int getDzienUrodzenia() const;
    int getMiesiacUrodzenia() const;
    int getRokUrodzenia() const;
    std::string getNumerTelefonu() const;

    static bool czyPoprawneImie(const std::string& imie);
    static bool czyPoprawneNazwisko(const std::string& nazwisko);
    static bool czyPoprawnaData(int dzien, int miesiac, int rok);
    static bool czyPoprawnyNumer(const std::string& numer_telefonu);

private:
    std::string imie;
    std::string nazwisko;
    int dzien_urodzenia;
    int miesiac_urodzenia;
    int rok_urodzenia;
    std::string numer_telefonu;

    static std::string capitalize(const std::string& str);
    static std::string capitalizeName(const std::string& name);
};

#endif
