// 05_Tukorszamok.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* Be: (a, b) ; a < b ; a >= 10
* Ki: [a..b] a tükörszámok (11, 101, 343)
*/

#include <iostream>

using namespace std;

int Read(int min);
void MirrorNumbers(int a, int b);
bool isMirror(int number);

int main()
{
	int a = Read(10);
	int b = Read(a);

	MirrorNumbers(a, b);
}

int Read(int min = 10)
{
	int szam;

	do {
		cout << "Kerek egy egesz szamot: ";
	} while (!(cin >> szam) || szam < min);

	return szam;
}

void MirrorNumbers(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		if (isMirror(i))
			cout << i << endl;
	}
}

bool isMirror(int inNumber)
{
	int rev = 0;
	int number = inNumber;
	while (number > 0) {
		rev *= 10;
		rev += number % 10;
		number /= 10;
	}

	return rev == inNumber;
}