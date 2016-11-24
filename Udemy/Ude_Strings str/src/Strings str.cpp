//============================================================================
// Name        : Strings.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string hello = "Detta går ju väldigt smidigt, jag fattar ju lite grann av detta.... ";

	string strOne = "Ett + ";

	string strTwo = "Två + ";

	string strThree = "Tre. ";

	string strSumma = strOne + strTwo + strThree;

	cout << "Summa: " << strSumma;

	cout << hello << endl;

	return 0;
}
