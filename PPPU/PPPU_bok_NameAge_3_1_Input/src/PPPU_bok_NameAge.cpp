//============================================================================
// Name        : PPPU_bok_NameAge.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {

	cout << "Enter you name: (followed by enter)." << endl;
	string fName;
	cin >> fName; // 1) Standard input stream (object)
	cout << "Hello " << fName << endl;

	//------------------------------------------------------------------------------- /* 1) CIN source of characters determined by the environment */

	string name;
	cout << "Please, enter your full name: ";
	getline(cin, name);// 2) Get line from stream into string (function)
	cout << "Hello, " << name << "!\n";

	//------------------------------------------------------------------------------- /* 2) GETLINE Get line from stream into string */
}

