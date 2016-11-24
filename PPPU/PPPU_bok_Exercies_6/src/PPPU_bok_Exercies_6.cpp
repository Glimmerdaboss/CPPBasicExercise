//============================================================================
// Name        : PPPU_bok_Exercies_6.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// Variabler
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;

	cout << "Please enter three integer values separated by a space: ";
	cin >> val1 >> val2 >> val3;

	cout << "values read : " << val1 << ", " << val2 << ", " << val3 << '\n';

	// Variabler
	int smallest = 0;
	int middle = 0;
	int largest = 0;

	//-------------------------------------------------------------------------------
	// Om val1 är mindre än val2 OCH val1 är mindre än val3 så är val1 minst.
	//-------------------------------------------------------------------------------

	if (val1 <= val2 && val1 <= val3) {	// && = OCH
		smallest = val1;

		//-------------------------------------------------------------------------------
		// Om val2 är mindre än val3 så är val2 mittersta och val3 är störst, Annars är val3 mittersta och val2 störst
		//-------------------------------------------------------------------------------

		if (val2 <= val3) {
			middle = val2;
			largest = val3;
		}
		else {
			middle = val3;
			largest = val2;
		}

		//-------------------------------------------------------------------------------
		// Om val2 är mindre än val1 OCH val2 är mindre än val3 så är val2 minst.
		//-------------------------------------------------------------------------------

	} else if (val2 <= val1 && val2 <= val3) {
		smallest = val2;

		//-------------------------------------------------------------------------------
		// Om val1 är mindre än val3 så är val1 mittersta och val3 är störst, Annars är val3 mittersta och val1 störst
		//-------------------------------------------------------------------------------

		if (val1 <= val3) {
			middle = val1;
			largest = val3;

		} else {
			middle = val3;
			largest = val1;
		}
		// ------------------------------------------------------------------------------
		// Eftersom val1 och val2 inte är mindre än val3, måste val 3 vara minst.
		//-------------------------------------------------------------------------------
	} else {
		smallest = val3;
		if (val1 <= val2) {
			middle = val1;
			largest = val2;

		} else {
			middle = val2;
			largest = val1;
		}
	}

	cout << "values sorted : " << smallest << ", " << middle << ", " << largest
			<< '\n';

	/*
	 I think this code is rather tedious. That is, it repeats similar code three times with different
	 variable names. How do we know that it is correct?

	 Is there a *simple* way of doing less work? (yes) Does doing less work make this code easier to understand?

	 What would e have to do to do this exercise for four variables? for five?
	 How many if-statements would you need for four variables? for five variables?

	 Chapter 4 will give us the key tool for better solutions: vectors.
	 */

	return 0;
}
