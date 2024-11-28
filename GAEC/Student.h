#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    string Nume, Prenume, Facultate, Varsta;
    Student(string n = "") : Nume(n) {}


    Student& operator=(int id) {
        Nume = "Student_" + to_string(id);
        return *this;
    }
};

