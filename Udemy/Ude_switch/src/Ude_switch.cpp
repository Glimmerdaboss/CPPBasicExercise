//============================================================================
// Name        : Ude_switch.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <string>

int main() {

	// local variable declaration:
	   string grade = 'B';

	   switch(grade)
	   {
	   case 'A' :
	      cout << "Excellent!" << endl;
	      break;
	   case 'B' :
	   case 'C' :
	      cout << "Well done" << endl;
	      break;
	   case 'D' :
	      cout << "You passed" << endl;
	      break;
	   case 'F' :
	      cout << "Better try again" << endl;
	      break;
	   default :
	      cout << "Invalid grade" << endl;
	   }
	   cout << "Your grade is " << grade << endl;

	   return 0;
}
