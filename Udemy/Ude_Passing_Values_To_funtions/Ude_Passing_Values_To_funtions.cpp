// Ude_Passing_Values_To_funtions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void showMenu() {

	cout << "1. Volvo" << endl;
	cout << "2. VW" << endl;
	cout << "3. BMW" << endl;
}

int getInput() {
	int input;
	cout << "Enter your selection: " << endl;
	cin >> input;

	return input;
}

void processSelection(int option) {

	switch (option)
	{
	case 1:
		cout << "Du valde Volvo " << endl;
		break;

	case 2:
		cout << "Du valde VW " << endl;
		break;

	case 3:
		cout << "Du valde BMW " << endl;
		break;
	default:
		cout << "Default" << endl;
		break;
	}
}

int main()
{

	showMenu(); // 1) Visar menyn....
	
	int input = getInput(); //2) getInput = Input
	/* Variabeln input sparar ner det användaren väljer i funktionen getInput */
	
	processSelection(input); // 3) switch satsen = processSelection = (getInput = Input)
	
	return 0;
}

