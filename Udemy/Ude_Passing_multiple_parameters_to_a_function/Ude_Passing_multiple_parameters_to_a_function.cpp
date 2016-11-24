// Ude_Passing_multiple_parameters_to_a_function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int add(int x, int y) {


	int answer = x*y;
	return answer;
}


int main()
{
	int answer;

	answer = add(10, 11);

	cout << answer << endl;

	return 0;
}


