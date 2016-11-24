//============================================================================
// Name        : PPPU_bok_Exercies_.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int oddOrEvenNr; // Variable

	cout <<"Enter a number: " << endl; // Output (meddelande)

	cin>>oddOrEvenNr; // Sparar input

	if(oddOrEvenNr%2==0) { // Jämför med hjälp av modulus
		cout<<"This is a even number" << "\n";
	}
	else {
		cout<<"This is a odd number" <<"\n";
	}



	return 0;
}
