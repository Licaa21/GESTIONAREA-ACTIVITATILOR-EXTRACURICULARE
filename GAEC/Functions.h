#pragma once
#include <iostream>
#include <fstream>
#include "Student.h"
#include <cstdlib>
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

void FirstMenu()
{
	int stop = 1;
	int n;
	
	while (stop > 0)
	{
		#ifdef _WIN32
			system("cls");
		#else
			system("clear");
		#endif

		cout << endl;
		cout << "===============================" << endl;
		cout << "=         GAEC PROGRAM        =" << endl;
		cout << "===============================" << endl;
		cout << endl;
		cout << "1. Gestionarea studentilor" << '\n';
		cout << endl;
		cout << "2. Meniul de administratie" << '\n';
		cout << endl;
		cout << "3. Gestionarea cluburilor" << '\n';
		cout << endl;
		cout << "4. Inchiderea programului" << '\n';
		cout << endl;
		cin >> n;
		cout << endl;

		if (n == 1)
		{
			int stopthis = 1;;
			while (stopthis > 0)
			{
				#ifdef _WIN32
					system("cls");
				#else
					system("clear");
				#endif
				cout << endl;
				cout << "===============================" << endl;
				cout << "=         GAEC PROGRAM        =" << endl;
				cout << "===============================" << endl;
				cout << endl;
				cout << "1.Inscrierea unui student in program." << '\n';
				cout << endl;
				cout << "2.Afisarea listei tuturor studentilor inscrisi in program." << '\n';
				cout << endl;
				cout << "3.Schimbarea datelor unui student in program." << '\n';
				cout << endl;
				cout << "4.Stergerea unui student din program" << '\n';
				cout << endl;
				cout << "0.Inapoi la meniul principal" << '\n';
				cout << endl;
				cin >> n;
				cout << endl;
				if (n == 1)
				{
					Inregistrare();
					cout << "Student inregistrat cu succes!" << '\n';
					cout << endl;
					cin.ignore();
					cin.get();
				}
				else if (n == 0)
				{
					stopthis = 0;
				}
			}
		}
		else if (n == 0)
		{
			stop = 0;
		}


	}
}
