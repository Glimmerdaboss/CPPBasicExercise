//============================================================================
// Name        : Ude_IF_ELSE.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Snippets	   : // cout<< "" << endl; cin >> >> endl;
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// Simple Menu

	// --- Block 1 START ---
	cout << "1) \tAdd a new record" << endl;
	cout << "2) \tDelete record" << endl;
	cout << "3) \tView record" << endl;
	cout << "4) \tSearch record" << endl;
	cout << "5) \tQuit" << endl;

	cout << "\nEnter a selection > " << flush;

	// --- TRY YOUR BLOCK OF CODE ---
	// * --- JUST TRY TO RUN THE PROGRAM --- *
	// --- TRY YOUR BLOCK OF CODE ---

	// --- Block 1 END ---
	//------------------------------------------------------------------------------- /* OUTPUTS */
	// --- Block 2 START ---
	int value;
	cin >> value;

	// --- TRY YOUR BLOCK OF CODE --- * When program are finished, comment this out..... *
	// cout << " \nYour choice was > " << value << flush;

	// --- Block 2 END ---
	//------------------------------------------------------------------------------- /* INPUTS */
	// --- Block 3 START ---
	if (value < 3) {
		cout << "Insufficient privileges to use these menu options" << endl;
	} else {
		cout << "Privileges level sufficient" << endl;
	}

	if(value==5){
		cout <<"Quitting application...." << endl;
	} else {
		cout << "Not quitting..." << endl;
	}
	// --- Block 3 END ---
	//------------------------------------------------------------------------------- /* Choice of selection */

	return 0;
}
