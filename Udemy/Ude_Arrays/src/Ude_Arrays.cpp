//============================================================================
// Name        : Ude_Arrays.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int iValues[3] {88, 98, 908};
	string sValues[3]{"A","B","C" };

	/*
	iValues[0] = 88;
	iValues[1] = 98;
	iValues[2] = 908;
	*/

	/*
	sValues[0] = "A";
	sValues[1] = "B";
	sValues[2] = "C";
	*/

	cout << iValues[0] <<","<< iValues[1]<<"," <<iValues[2] << endl;
	cout << sValues[0] <<","<< sValues[1]<<"," <<sValues[2] << endl;

	return 0;
}
