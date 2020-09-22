// 03_BasicMath.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int r;
	cout << "Kor kerulete: ";
	cin >> r;

	if (cin)
	{
		double k = M_PI * r * 2;
		double t = M_PI * r * r;

		cout << "Kerulet: " << k << endl;
		cout << "Terulet: " << t << endl;
	}
	else {
		cout << "Hibas adat!" << endl;
	}
}