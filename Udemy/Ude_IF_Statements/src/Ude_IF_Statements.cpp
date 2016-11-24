//============================================================================
// Name        : Ude_IF_Statements.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// --- Block 1 START ---

	// User login program
	string password = "Hello"; // Declare varibel with password..
	cout << "Enter your password > " << flush; // Output ...

	string input; // Declare varibel for stroring user input ...
	cin >> input; // Input from user

	// --- TRY YOUR BLOCK OF CODE ---
	cout << "'" << input << "'" << endl; // Check out every step on the way...
	// --- TRY YOUR BLOCK OF CODE ---

	// --- Block 1 END --- \\
	//------------------------------------------------------------------------------- /* Kommentarer */

	// --- Block 2 START ---
	// IF Statement
	if (input== password) /*if(om det är samma input som lagrat värde (Eqal(==)) Condition*/{
		cout << "Password accepted. " << endl; // Output..
	}

	if (input != password) { /*if(om det INTE är samma input som lagrat värde (Eqal(!=)) Condition*/
		cout << "Access denied" << endl;
	}

	// --- TRY YOUR BLOCK OF CODE ---
		cout << "'" << input << "'" << "\n"; // Check out every step on the way...
		// --- TRY YOUR BLOCK OF CODE ---

		// --- Block 2 END --- \\

	return 0;
}
