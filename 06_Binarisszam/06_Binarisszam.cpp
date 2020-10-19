// 06_Binarisszam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int input = 0;

	cout << "Adj meg egy tizes számrendszer beli számot: ";
	cin >> input;
	std::string binary = std::bitset<8>(input).to_string();
	std::cout << binary << "\n";
}