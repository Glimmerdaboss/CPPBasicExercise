// Ude_switch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{	
	cout << "Enter a letter 'A' or 'B': " << endl;
	char letter;
	cin >> letter;


	switch (letter)
	{
	case 'A':
		cout << "Alltid" << endl;
		break;

	case 'B':
		cout << "Bra" << endl;
		break;
	default:
		cout << "Default" << endl;
	}
	
	// Stop ------------------------ APP/ Prog
	char stopp;
	cout << "Press any letter and then enter to exit debug mode " << endl;
	cin >> stopp;

    return 0;
}

