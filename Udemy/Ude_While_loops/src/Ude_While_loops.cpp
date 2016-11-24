//============================================================================
// Name        : Ude_While_loops.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// --- Block 1 START ---
	int ctr = 0;
	// --- Block 1 END ---
	//------------------------------------------------------------------------------- /* Variabler */

	// --- Block 2 START ---
	while (ctr < 5) {
		cout << "Hello " << ctr << endl;
		ctr++; /* ctr++ == ctr = ctr + 1; Increments 'ctr' by one */
	}
	// --- TRY YOUR BLOCK OF CODE ---
	cout << "Programming quiting." << endl;
	// --- Block 2 END ---
	//------------------------------------------------------------------------------- /* While loop */

	return 0;
}
