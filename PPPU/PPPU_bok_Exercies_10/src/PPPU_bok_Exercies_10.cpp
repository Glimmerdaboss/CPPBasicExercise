//============================================================================
// Name        : PPPU_bok_Exercies_10.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// Variabler
	string operation;

	double val1;
	double val2;

	cout << "1) Välj decimaltal ett 2) Välj räknesätt (+, -, *, /,plus, minus, mul, div) 3) Välj decimaltal två \n";
	while (cin >> val1 >> operation >> val2 ) {

		double res = 0;

		if (operation == "Plus" || operation == "+")
			res = val1 + val2;

		else if (operation == "Minus" || operation == "-")
			res = val1 - val2;

		else if (operation == "Mul" || operation == "*")
			res = val1 * val2;

		else if (operation == "Div" || operation == "/")
			res = val1 / val2;


		cout << val1 << operation << val2 <<  " == " << res << "\n";

		return 0;
	}
}
