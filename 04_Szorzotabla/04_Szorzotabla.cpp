// 04_Szorzotabla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//Main-ben haszn�lt szignat�r�k
int EgeszBeker();

int main()
{
	cout << "Kell egy eg�sz" << endl;
	int egesz;
	cin >> egesz;

	cout << "Kell egy t�rt" << endl;
	float tort;
	cin >> tort;

	cout << egesz << "; " << tort;

	//int TablaMeret = EgeszBeker();
}

int EgeszBeker()
{
	cout << "K�rek egy eg�sz sz�mot";
	int szam;
	cin >> szam;
	return szam;
}