// Ude_Return_Values.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void showMenu() {

	cout << "1. Search" << endl;
	cout << "2. View record" << endl;
	cout << "3. Quit" << endl;

}

int getInputFromUser() {

	cout << "Enter selection: " << endl;
	int input;
	cin >> input;

	return input;

}

int processSwitch() {

	int selection = getInputFromUser();

	switch (selection)
	{
	case 1:
		cout << "Searching ...." << endl;
		break;

	case 2:
		cout << "Viewing...." << endl;
		break;

	case 3:
		cout << "Quitting ....." << endl;
		break;

	default:
		cout << "Default" << endl;
		break;
	}

	return selection;

}


int main()
{
	showMenu();
	processSwitch();
	
	return 0;
}

