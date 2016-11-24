// Ude_Multi_Array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>

int main()
{

	string multiArray[][3] = {
	{"A","Aa","Aaa"}, {"B","Bb","Bbb"}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
		{
			cout << "" << multiArray[i][j] << endl;
		}

	}


	// Stop ------------------------ APP/ Prog
	char stopp;
	cout << "Press any letter and then enter to exit debug mode " << endl;
	cin >> stopp;

	return 0;
}

