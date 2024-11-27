#pragma once
#include <iostream>
#include <fstream>
#include "Student.h"
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

void Inregistrare()
{
	ofstream o("Studenti.txt", std::ios::app);
	Student s;
	cout << "Numele:";
	cin >> s.Nume;
	o << s.Nume << " ";
	cout << "Prenumele:";
	cin >> s.Prenume;
	o << s.Prenume << " ";
	cout << "Facultatea:";
	cin >> s.Facultate;
	o << s.Facultate << " ";
	cout << "Varsta:";
	cin >> s.Varsta;
	o << s.Varsta << " ";
	o << endl;
	cout << endl;
	o.close();
}
bool isFileEffectivelyEmpty(const string& filePath) 
{
	ifstream file(filePath);
	if (!file) 
	{
		cerr << "Error: Could not open file." << endl;
		return false;
	}

	char ch;
	while (file.get(ch)) 
	{
		if (!isspace(static_cast<unsigned char>(ch))) 
		{
			return false;
		}
	}

	return true;
}

void Afisaretext() 
{
	ifstream file("Studenti.txt");
	if (!file) 
	{
		cerr << "S-a produs o eroare." << '\n';
		return;
	}

	if (isFileEffectivelyEmpty("Studenti.txt")) 
	{
		cout << "Nu exista niciun student inscris in program" << '\n';
	}
	else 
	{
		string line;
		while (getline(file, line)) 
		{
			cout << line << '\n';
		}           
		cout << "Doriti sa iesiti din program ?(Y/N) " << '\n';
		char p;
		cin >> p;
		if ((p == 'Y') || (p == 'y'))
		{
			exit(0);
		}
		else if ((p == 'N') || (p == 'n'))
		{
			return;
		}
		
	}

	file.close();
}

void Changedata()	
{
	system("cls");
	ifstream file("Studenti.txt");
	if (!file)
	{
		cerr << "S-a produs o eroare." << '\n';
		return;
	}
	vector<string> lines;
	string line;
	while (getline(file, line))
	{
		lines.push_back(line);
	}
	file.close();
	if (lines.empty())
	{
		cout << "Nu exista niciun student inscris in program." << '\n';
		return;
	}
	cout << "Lista studentilor inscrisi:" << '\n';
	for (size_t i = 0; i < lines.size(); i++)
		cout << i + 1 << ". " << lines[i] << '\n';
	int nrstudent;
	cout << "Introduceti numarul studentului pe care doriti sa il modificati (0 pentru a iesi):" << '\n';
	cin >> nrstudent;
	if (nrstudent == 0 || nrstudent > (int)lines.size())
	{
		return;
	}
	string nume, prenume, facultate, varsta;
	
	istringstream ss(lines[nrstudent - 1]);
	ss >> nume >> prenume >> facultate >> varsta;
	int a;
	do
		{
			system("cls");
			cout << '\n';
			cout << "===============================" << '\n';
			cout << "=         GAEC PROGRAM        =" << '\n';
			cout << "===============================" << '\n';
			cout << '\n';
			cout << "Student selectat:" << nume << " " << prenume << " " << facultate << " " << varsta <<"."<< '\n';
			cout << "Ce doriti sa schimbati ?" << '\n';
			cout << "1.Numele." << '\n';
			cout << "2.Prenumele." << '\n';
			cout << "3.Facultatea." << '\n';
			cout << "4.Varsta." << '\n';
			cout << "5.Finalizare modificari." << '\n';
			cin >> a;
			switch (a) 
			{
				cout << '\n';
				cout << "===============================" << '\n';
				cout << "=         GAEC PROGRAM        =" << '\n';
				cout << "===============================" << '\n';
				cout << '\n';
				case 1:
					cout << "Introduceti noul nume: " << '\n';
					cin >>nume;
					break;
				case 2:
					cout << "Introduceti noul prenume: " << '\n';
					cin >>prenume;
					break;
				case 3:
					cout << "Introduceti noua faculate: " << '\n';
					cin >>facultate;
					break;
				case 4:
					cout << "Introduceti noua varsta: " << '\n';
					cin >>varsta;
					break;
				case 5:
					cout << "Modificarile au fost salvate." << '\n';
					break;
				default:
					cout << "Optiune invalida. Incercati din nou." << '\n';
			}
	} while (a != 5);
	ostringstream updatedLine;
	updatedLine << nume << " " << prenume << " " << facultate << " " << varsta;
	lines[nrstudent - 1] = updatedLine.str();
	ofstream outFile("Studenti.txt");
	for (const auto& l : lines)
	{
		outFile << l << endl;
	}
	outFile.close();
}

void FirstMenu()
{
	int stop = 1;
	int n;
	
	while (stop > 0)
	{

		system("cls");
		cout << '\n';
		cout << "===============================" << '\n';
		cout << "=         GAEC PROGRAM        =" << '\n';
		cout << "===============================" << '\n';
		cout << '\n';
		cout << "1. Gestionarea studentilor." << '\n';
		cout << '\n';
		cout << "2. Meniul de administratie." << '\n';
		cout << '\n';
		cout << "3. Gestionarea cluburilor." << '\n';
		cout << '\n';
		cout << "4. Inchiderea programului." << '\n';
		cout << '\n';
		cin >> n;
		cout << '\n';

		if (n == 1)
		{
			int stopthis = 1;
			while (stopthis > 0)
			{
				system("cls");
				cout << '\n';
				cout << "===============================" << '\n';
				cout << "=         GAEC PROGRAM        =" << '\n';
				cout << "===============================" << '\n';
				cout << '\n';
				cout << "1.Inscrierea unui student in program." << '\n';
				cout << '\n';
				cout << "2.Afisarea listei tuturor studentilor inscrisi in program." << '\n';
				cout << '\n';
				cout << "3.Schimbarea datelor unui student in program." << '\n';
				cout << '\n';
				cout << "4.Stergerea unui student din program." << '\n';
				cout << '\n';
				cout << "5.Inapoi la meniul principal." << '\n';
				cout << '\n';
				cin >> n;
				cout << '\n';
				if (n == 1)
				{
					Inregistrare();
					cout << "Student inregistrat cu succes!" << '\n';
					cout << endl;
					cin.ignore();
				}
				else if (n == 2)
				{
					Afisaretext();
					cin.ignore();
					cin.get();
				}
				else if (n == 3)
				{
					Changedata();
					cin.ignore();

				}
				else if (n == 5)
				{
					stopthis = 0;
				}
			}
		}
		else if (n == 4)
		{
			system("cls");
			cout << '\n';
			stop = 0;
		}


	}
}
