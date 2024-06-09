#include "Student.h"
#include <iostream>
#include <algorithm>
#include <cctype>
#include <regex>

Student::Student(std::string imie, std::string nazwisko, int dzien, int miesiac, int rok, std::string numer_telefonu)
    : imie(capitalizeName(imie)), nazwisko(capitalizeName(nazwisko)), dzien_urodzenia(dzien), miesiac_urodzenia(miesiac), rok_urodzenia(rok), numer_telefonu(numer_telefonu) {
    if (imie.empty() || nazwisko.empty() || !czyPoprawneImie(imie) || !czyPoprawneNazwisko(nazwisko) || !czyPoprawnaData(dzien, miesiac, rok) || !czyPoprawnyNumer(numer_telefonu)) {
        throw std::invalid_argument("Invalid input data.");
    }
}

Student::~Student() {}

void Student::wyswietl() const {
    std::cout << imie << " " << nazwisko << ", Data urodzenia: " << dzien_urodzenia << "." << miesiac_urodzenia << "." << rok_urodzenia << ", Numer telefonu: " << numer_telefonu << std::endl;
}

std::string Student::getImie() const {
    return imie;
}

std::string Student::getNazwisko() const {
    return nazwisko;
}

int Student::getDzienUrodzenia() const {
    return dzien_urodzenia;
}

int Student::getMiesiacUrodzenia() const {
    return miesiac_urodzenia;
}

int Student::getRokUrodzenia() const {
    return rok_urodzenia;
}

std::string Student::getNumerTelefonu() const {
    return numer_telefonu;
}

bool Student::czyPoprawneImie(const std::string& imie) {
    std::regex wzorzec("^[A-Za-z¹¥æÆêÊ³£ñÑóÓœŒŸ¿¯]+$");
    return std::regex_match(imie, wzorzec);
}

bool Student::czyPoprawneNazwisko(const std::string& nazwisko) {
    std::regex wzorzec("^[A-Za-z¹¥æÆêÊ³£ñÑóÓœŒŸ¿¯]+$");
    return std::regex_match(nazwisko, wzorzec);
}

bool Student::czyPoprawnaData(int dzien, int miesiac, int rok) {
    if (dzien < 1 || dzien > 31 || miesiac < 1 || miesiac > 12 || rok < 1900 || rok > 2024) {
        return false;
    }

    int dni_w_miesiacu[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
        dni_w_miesiacu[1] = 29;
    }

    if (dzien > dni_w_miesiacu[miesiac - 1]) {
        return false;
    }

    return true;
}

bool Student::czyPoprawnyNumer(const std::string& numer_telefonu) {
    if (numer_telefonu.length() != 9) {
        return false;
    }

    for (char c : numer_telefonu) {
        if (!std::isdigit(c)) {
            return false;
        }
    }

    return true;
}

std::string Student::capitalize(const std::string& str) {
    if (str.empty()) {
        return str;
    }

    std::string result = str;
    result[0] = std::toupper(result[0]);
    for (size_t i = 1; i < result.size(); ++i) {
        result[i] = std::tolower(result[i]);
    }

    return result;
}

std::string Student::capitalizeName(const std::string& name) {
    std::string capitalized_name = name;
    bool new_word = true;

    for (size_t i = 0; i < capitalized_name.size(); ++i) {
        if (new_word) {
            capitalized_name[i] = std::toupper(capitalized_name[i]);
            new_word = false;
        }
        else {
            capitalized_name[i] = std::tolower(capitalized_name[i]);
        }

        if (capitalized_name[i] == ' ' || capitalized_name[i] == '-') {
            new_word = true;
        }
    }

    return capitalized_name;
}
