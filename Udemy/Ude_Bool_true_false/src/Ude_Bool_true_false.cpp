//============================================================================
// Name        : Ude_Bool_true_false.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool btValue = true; // Alltid 1
	bool bfValue = false; // Alltid 0

	cout << btValue<<"\n" << bfValue << endl;
	//--------------------------------------------

	char caValue = 55; // får ut 7.. !? ASCII kod.. character 7 är 55 i ASCii tabellen..

	char cValue = '7';

	cout <<caValue <<"\n"<< (int)cValue << endl; // (int)cValue = Casting a char to a int...

	return 0;
}
