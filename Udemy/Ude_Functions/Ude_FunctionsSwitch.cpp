// Ude_Functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View" << endl;
	cout << "3. Delete" << endl;
	cout << "4. Quit" << endl;
}

void swichCase() {
	cout << "Enter a selection: " << flush;

	int switchMeny;
	cin >> switchMeny;

	switch (switchMeny)
	{
	case 1:
		cout << "Searching...." << endl;
		break;
	case 2:
		cout << "Viewing...." << endl;
		break;
	case 3:
				cout << "Delete...." << endl;
		break;
	case 4:
		cout << "Quit...." << endl;
		break;
	default:
		cout << "Trya a diffrent alternativ." << endl;
		break;
	}
}

int main()
{
	showMenu();
	swichCase();
}

