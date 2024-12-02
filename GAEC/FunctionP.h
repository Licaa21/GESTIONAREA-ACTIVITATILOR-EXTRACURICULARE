#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>
#include "Student.h"
#include "FunctionS.h"
#include "FunctionC.h"

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
		cout << "Alegeti un numar pentru a continua. (1-4)" << '\n';
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
				cout << "1. Inscrierea unui student in program." << '\n';
				cout << '\n';
				cout << "2. Afisarea listei tuturor studentilor inscrisi in program." << '\n';
				cout << '\n';
				cout << "3. Schimbarea datelor unui student in program." << '\n';
				cout << '\n';
				cout << "4. Stergerea unui student din program." << '\n';
				cout << '\n';
				cout << "5. Inapoi la meniul principal." << '\n';
				cout << '\n';
				cout << "Alegeti un numar pentru a continua. (1-5)" << '\n';
				cout << '\n';
				cin >> n;
				cout << '\n';
				switch (n)
				{
					case 1:
						Inregistrare();
						cin.ignore();
						cin.get();
					
					case 2 :

						Afisaretext();
						cin.ignore();
						cin.get();

					case 3 :

						Changedata();
						cin.ignore();
						cin.get();


					case 4 :

						StergereStudent();
						cin.ignore();
						cin.get();

					case 5 :

						stopthis = 0;

				}
			}
		}
		else if (n == 2)
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
				cout << "1. Creearea unui club. " << '\n';
				cout << '\n';
				cout << "2. Adaugarea unui student intr-un club." << '\n';
				cout << '\n';
				cout << "3. Schimbarea datelor unui club." << '\n';
				cout << '\n';
				cout << "4. Stergerea unui student din club." << '\n';
				cout << '\n';
				cout << "5. Afisarea datelor unui club" << '\n';
				cout << '\n';
				cout << "Alegeti un numar pentru a continua. (1-5)" << '\n';
				cout << '\n';
				cin >> n;
				cout << '\n';
				if (n == 1)
				{
					
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