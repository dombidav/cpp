// 04_Szorzotabla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

//Main-ben használt szignatúrák
int EgeszBeker();
void Szorzotabla(int tablaMeret);
int Szelesseg(int tablaMeret);

int main()
{
	int TablaMeret = EgeszBeker();
	Szorzotabla(TablaMeret);
}

int EgeszBeker()
{
	int szam;

	do {
		cout << "Kerek egy egesz szamot";
	} while (!(cin >> szam));

	return szam;
}

void Szorzotabla(int tablaMeret)
{
	int szelesseg = Szelesseg(tablaMeret);

	cout << setw(szelesseg) << " ";
	for (int i = 1; i <= tablaMeret; i++)
	{
		cout << setw(szelesseg) << i;
	}
	cout << endl;

	for (int i = 1; i <= tablaMeret; i++) {
		cout << setw(szelesseg) << i;
		for (int j = 1; j <= tablaMeret; j++)
		{
			cout << setw(szelesseg) << i * j;
		}
		cout << endl;
	}
}

int Szelesseg(int tablaMeret)
{
	int max = tablaMeret * tablaMeret;
	int szelesseg = 0;
	while (max) {
		max = max / 10;
		szelesseg++;
	}
	return szelesseg + 1;
}