// Ude_IF statement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int getInput() {

	cout << "Enter a number: " << endl;
	int input1;
	cin >> input1;

	cout << "Enter a second number: " << endl;
	int input2;
	cin >> input2;

	return input1, input2;
}


void ifStatements(int input1, int input2) {


	if (input1 < input2)
	{
		cout << "X is bigger" << endl;
	}
	else {
		cout << "Y is bigger" << endl;
	}


}

int main()
{

	int userInput = getInput();
		ifStatements(1,1);


	return 0;

}

