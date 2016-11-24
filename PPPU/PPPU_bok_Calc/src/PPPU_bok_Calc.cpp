//============================================================================
// Name        : PPPU_bok_Calc.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// --- Block 1 START ---
	char o;
	double dVal1, dVal2;
	// --- Block 1 END ---
	//------------------------------------------------------------------------------- /* Variabels */

	// --- Block 2 START ---
	cout << "Enter the operator (+ , -, *, /,): " << flush;
	cin >> o;
	// --- Block 2 END ---
	//------------------------------------------------------------------------------- /* Output then take a input of a operator */

	// --- Block 3 START ---
	cout << "Enter two numbers: " << flush;
	cin >> dVal1 >> dVal2;
	// --- Block 3 END ---
	//------------------------------------------------------------------------------- /* Output and then take a input of your numbers */

	// --- Block 4 START ---
	switch (o) {
	case '+':
		cout << "You result is: " << dVal1 + dVal2;
		break;

	case '-':
		cout << "You result is: " << dVal1 - dVal2;
		break;

	case '*':
		cout << "You result is: " << dVal1 * dVal2;
		break;

	case '/':
		if (dVal2 == 0) {
			cout << "Trying to divide zero" << endl;
			cout << "You result is: " << dVal1 / dVal2;
		}
		break;

	default:
		cout << "Error! The operator is not correct" << endl;
		break;

	}
// --- TRY YOUR BLOCK OF CODE ---

// --- Block 4 END ---
//------------------------------------------------------------------------------- /* While loop */
	return 0;
}
