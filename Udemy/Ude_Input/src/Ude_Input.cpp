//============================================================================
// Name        : Ude_Input.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Enter your name: " << flush ; // Flush skapar inte nya rad linjer.
	string input;
	cin>>input; // >> = Extraktion operator
	cout << "You enterted: " << input << endl;

	cout <<"Enter a value: " << flush;
	int value;
	cin>>value; // c-in= Mata in värde från användare
	cout <<"You entered: " << value << endl; // c-out= Skriver ut värde från användare.

	return 0;
}
