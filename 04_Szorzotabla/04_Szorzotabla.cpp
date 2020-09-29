// 04_Szorzotabla.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

//Main-ben használt szignatúrák
int EgeszBeker();

int main()
{
	cout << "Kell egy egész" << endl;
	int egesz;
	cin >> egesz;

	cout << "Kell egy tört" << endl;
	float tort;
	cin >> tort;

	cout << egesz << "; " << tort;

	//int TablaMeret = EgeszBeker();
}

int EgeszBeker()
{
	cout << "Kérek egy egész számot";
	int szam;
	cin >> szam;
	return szam;
}