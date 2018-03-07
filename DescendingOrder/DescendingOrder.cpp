// Jonathan Vertiz
// ITSE 1307
// Three numbers in descending order
// DescendingOrder.cpp : Takes in 3 variables and compares them to each other to find the largest to smallest

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	//Initilize the values we'll need for the program
	int intNumberAlpha = 0;
	int intNumberBravo = 0;
	int intNumberCharlie = 0;

	//Prompts the user to enter the numbers we'll compare
	cout << "Please enter your first number: ";
	cin >> intNumberAlpha;
	cout << "Please enter your second number: ";
	cin >> intNumberBravo;
	cout << "Please enter your third number: ";
	cin >> intNumberCharlie;
	cout << "Your numbers from largest to smallest are: ";

	//Block of code that's an if statemnt that call for and compares which number is the largest among the entered variables
	if (intNumberAlpha > intNumberBravo && intNumberBravo > intNumberCharlie)
	{
		cout << intNumberAlpha << " " << intNumberBravo << " " << intNumberCharlie;
	}
	else if (intNumberAlpha > intNumberCharlie && intNumberBravo < intNumberCharlie)
	{
		cout << intNumberAlpha << " " << intNumberCharlie << " " << intNumberBravo;
	}
	else if (intNumberBravo > intNumberAlpha && intNumberAlpha > intNumberCharlie)
	{
		cout << intNumberBravo << " " << intNumberAlpha << " " << intNumberCharlie;
	}
	else if (intNumberBravo > intNumberCharlie && intNumberAlpha < intNumberCharlie)
	{
		cout << intNumberBravo << " " << intNumberCharlie << " " << intNumberAlpha;
	}
	else if (intNumberCharlie > intNumberAlpha && intNumberBravo < intNumberAlpha)
	{
		cout << intNumberCharlie << " " << intNumberAlpha << " " << intNumberBravo;
	}
	else if (intNumberCharlie > intNumberBravo && intNumberAlpha < intNumberBravo)
	{
		cout << intNumberCharlie << " " << intNumberBravo << " " << intNumberAlpha;
	}
    return 0;
}

