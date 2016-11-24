//============================================================================
// Name        : Ude_Conditions.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// --- Block 1 START ---

	// Variabels
	int value1 = 7;
	int value2 = 12;

// --- TRY YOUR BLOCK OF CODE ---

// --- Block 1 END ---
	//------------------------------------------------------------------------------- /* Variabels */
	if (value1 < 3) { // If value one is smaller then 7 = TRUE ELSE False
		cout << "1) True" << endl;
	} else
		cout << "1) False" << endl;
	// --- Block 2 START ---

	// --- TRY YOUR BLOCK OF CODE ---

	// --- Block 2 END ---
	//------------------------------------------------------------------------------- /* Logic smaller the and larger then  */

	// --- Block 3 START ---
	if (value1 == 8 && value2 == 13) { // Both needs to be true = TRUE ELSE False
		cout << "2) True" << endl;
	} else
		cout << "2) False" << endl;
	// --- TRY YOUR BLOCK OF CODE ---

	// --- Block 3 END ---
	//------------------------------------------------------------------------------- /* Logic && means both must be true */

	// --- Block 4 START ---
	if (value1 == 3 || value2 > 100) { // One of this is true = TRUE ELSE False
		cout << "3) True" << endl;
	} else
		cout << "3) False" << endl;
	// --- TRY YOUR BLOCK OF CODE ---

	// --- Block 4 END ---
	//------------------------------------------------------------------------------- /* Logic "&&" means both must be true combined with "smaller then" */
	// --- Block 5 START ---
	if ((value2 !=13 && value1==8) || value1 > 10) { // One of this is true = TRUE ELSE False
		cout << "4) True" << endl;
	} else
		cout << "4) False" << endl;
	// --- TRY YOUR BLOCK OF CODE ---

	// --- Block 5 END ---
	//------------------------------------------------------------------------------- /* Logic with !=, &&, ||(or) */

	// --- Block 5 START ---
	bool condition1 = (value2 !=13) && (value1==7);
	bool condition2 = value1 > 10;

	if (condition1 || condition2) { // One of this is true = TRUE ELSE False
		cout << "5) True" << endl;
	} else
		cout << "5) False" << endl;
	// --- TRY YOUR BLOCK OF CODE ---

	// --- Block 5 END ---
	//------------------------------------------------------------------------------- /* Use booleans conditions...  */


	return 0;
}
