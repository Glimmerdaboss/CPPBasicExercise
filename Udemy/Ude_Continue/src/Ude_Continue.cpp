//============================================================================
// Name        : Ude_Continue.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	//-------------------------------------------------------------------------------
	/* --- Break loop ---
	 * //-------------------------------------------------------------------------------
	 for (int i = 0; i < 5; i++) {

	 cout << "i is: " << i << endl;

	 if (i == 3) {
	 break;
	 }

	 cout << "looping" << endl;
	 }
	 cout << "Program quitting...." << endl;

	 return 0;
	 */
	//-------------------------------------------------------------------------------
	/* --- Continue loop ---
	 * //-------------------------------------------------------------------------------
	 for (int i = 0; i < 5; i++) {

	 cout << "i is: " << i << endl;

	 if (i == 3) {
	 continue;
	 }

	 cout << "looping..." << endl;
	 }
	 cout << "Program quitting...." << endl;
	 */
	//-------------------------------------------------------------------------------
	// --- Do while with out continue or break loop ---
	//-------------------------------------------------------------------------------
	/*

	 const string cPw = "Åke";
	 string inPw;

	 do {
	 cout << "Enter your password > " << flush;
	 cin >> inPw;
	 if (inPw != cPw) {
	 cout << "Access denied" << endl;
	 }
	 } while (inPw != cPw);
	 cout << "Password accepted" << endl;
	 */

	//-------------------------------------------------------------------------------
	// --- Do while with continue or break loop ---
	//-------------------------------------------------------------------------------

	const string cPw = "Åke";
	string inPw;

	do {
		cout << "Enter your password > " << flush;
		cin >> inPw;
		if (inPw == cPw) {
			break;

		}
		else{
			cout << "Access denied" << endl;
		}
	} while (true);
	cout << "Password accepted" << endl;

}















