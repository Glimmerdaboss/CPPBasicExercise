//============================================================================
// Name        : Ude_IF_ELSE_ELSE_IF.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// Meny with string choice

	// --- Block 1 START ---
	cout << "A. ADD" << endl;
	cout << "B. DEL" << endl;
	cout << "C. VIEW" << endl;
	cout << "D. SEARCH" << endl;
	cout << "E. QUIT" << endl;

	// --- TRY YOUR BLOCK OF CODE ---
	cout << "Enter your selection > " << endl;
	// --- Block 1 END --- \\
	//^ ------------------------------------------------------------------------------- ^ /* OUTPUT */

	// --- Block 2 START ---
	string value;
	cin >> value;
	// --- Block 2 END --- \\
	//^ ------------------------------------------------------------------------------- ^ /* INPUT */

	// --- Block 3 START ---

	if (value == "A") {
		cout << "ADD" << endl;
	} else if (value == "B") {
		cout << "DEL" << endl;
	} else if (value == "C") {
		cout << "VIEW" << endl;
	} else if (value == "D") {
		cout << "SEARCH" << endl;
	} else if (value == "E") {
		cout << "QUIT" << endl;
	} else {
		cout << "Try agian. Your choice is A to E." << endl;
	}

	// --- Block 3 END --- \\
	//^ ------------------------------------------------------------------------------- ^ /* IF, ELSE IF AND ELSE */

	// --- TRY YOUR BLOCK OF CODE ---

	return 0;
}
