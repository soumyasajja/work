// main1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int add(int a, int b);
int subtract(int c, int d);
long int multiply(int e, int f);
int divide(int g, int h);
int main()
{ 
	int addition,subtraction,multiplication,division;
    cout << "Hello World!\n"; 
	addition = add(3, 4);
	subtraction = subtract(3, 4);
	multiplication = multiply(3, 4);
	division = divide(3, 4);
	cout << "addition=" << addition << endl;
	cout << "subtraction=" << subtraction << endl;
	cout << "multiplication=" << multiplication << endl;
	cout << "division=" << division << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
