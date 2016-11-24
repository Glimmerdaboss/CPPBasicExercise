//============================================================================
// Name        : PPPU_bok_Exercises_Val.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {


	int val1;
	int val2;

	cout <<"Write in two numbers: " << endl;

	cin>>val1;
	cin>>val2;

	cout<<"You wrote: " << val1 <<" and " << val2 << endl;

	if (val1 > val2) {
			cout<< "Higher value\n";
		}
		else if (val1<val2) {
			cout<< "Lover value\n";
		}

		else if (val1 == val2) {
			 cout<<"unknown\n";
		 }

		cout <<"The summar of val1 and val2: " << val1+val2 << endl;




	return 0;
}
