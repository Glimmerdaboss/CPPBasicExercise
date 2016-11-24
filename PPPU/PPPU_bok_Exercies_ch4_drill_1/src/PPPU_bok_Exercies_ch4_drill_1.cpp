//============================================================================
// Name        : PPPU_bok_Exercies_ch4_drill_1.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a, b;
	string choice;

	while (cin >> a >> b)
		cout << a << " " << b << "\n";
	cin >> choice;

	if (choice == "|")
		cout << "Exit \n";

	cout<<"You terminted the program" <<endl;
		return 0;
}
