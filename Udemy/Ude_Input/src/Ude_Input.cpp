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
	cin>>value; // c-in= Mata in v�rde fr�n anv�ndare
	cout <<"You entered: " << value << endl; // c-out= Skriver ut v�rde fr�n anv�ndare.

	return 0;
}
