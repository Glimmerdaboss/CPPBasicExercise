//============================================================================
// Name        : PPPU_bok_NameAge_3_2_Variabels.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
	cout << "Please enter your first name and age : " << endl;

// 1	string fName;
// 1	int age;

	string fName; // 2
	double age; 		// 2
	double ageMonths = 12;
	cin >> fName >> age;

// 1 cin >> age;

	cout << "Hello, " << fName << "." << " Your age is " << age * ageMonths << " Months." << endl;

	return 0;

}
