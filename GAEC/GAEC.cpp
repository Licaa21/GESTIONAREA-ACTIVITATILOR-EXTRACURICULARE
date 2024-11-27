#include "Student.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <conio.h> 
#include <stdio.h>
int n, a;
int stop, stop1;
string text;
char aux, raspuns;
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
	cout << endl;
	o.close();
}
int main()
{
	stop = 1;
	while (stop > 0)
	{
		stop = 1;
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
			while (stop > 0)
			{
				cout << "  " << "Pentru inscrierea unui student in program, apasati tasta 1." << '\n';
				cout << endl;
				cout << "  " << "Pentru lista intreaga a studentilor inscrisi in program, apasati tasta 2." << '\n';
				cout << endl;
				cout << "  " << "Pentru schimbarea datelor unui student, apasati tasta 3." << '\n';
				cout << endl;
				cout << "  " << "Pentru eliminarea unui student din program, apasati tasta 4." << '\n';
				cout << endl;
				cout << "  " << "Pentru revenirea la meniul principal, apsati tasta 0." << '\n';
				cout << endl;
				cin >> n;
				cout << endl;
				if (n == 1)
				{
					Inregistrare();
					cout << "Student inregistrat cu succes!" << '\n';
					cout << endl;
				}

				else if (n == 2)
				{
					ifstream p("Studenti.txt");
					p.seekg(0, std::ios::end);
					if (p.tellg() == 0)
					{
						cout << "Nu exista niciun student inscris in program." << '\n';
						cout << endl;
					}
					else
					{
						ifstream p("Studenti.txt");
						while (p >> text)
						{
							getline(p, text);
							cout << text << endl;
							cout << endl;
						}
					}
					cout << "Doriti sa va intoarceti la meniul principal ? (Y / N)" << '\n';
					cout << endl;
					cin >> raspuns;
					if ((raspuns == 'Y') || (raspuns == 'y'))
					{
						cout << endl;
					}
					else if ((raspuns == 'N') || (raspuns == 'n'))
					{
						stop = 0;
					}
				}
				else if (n == 0)
				{
					cout << endl;
				}
			}
		}
		else if (n == 0)
		{
			stop = 0;
		}


	}
}

