//============================================================================
// Name        : test1.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "Enter the name of the person you ant to write to. " << endl; // 2

			string fName;
			cin >> fName;

			string lName;
			cin >> lName;

			cout << "Dear, " << fName << " " << lName << endl;
			cout << "How are you today" << flush;

			string answer;
			cin >> answer;

			cout << "So you are " << answer << endl; // Skriver inte ut hela svaret !! Varför!?

			char gender;
				//char F;
				 // char M;

				cout <<"Please enter M if you are a male, and F if you are a female.";
				cin >> gender;

				if ( gender == 'M')
				{
				cout << "You are a Male. Call me";
				}
				else if ( gender == 'F')
				{
				cout << "You are a Female. Text me ";
				}
				else if ( gender != 'M' || gender != 'F' )
				{
				cout << "Invalid output";
				}




















	return 0;
}
