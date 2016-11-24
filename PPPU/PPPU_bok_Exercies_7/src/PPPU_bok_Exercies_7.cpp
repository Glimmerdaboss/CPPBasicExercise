//============================================================================
// Name        : PPPU_bok_Exercies_7.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// Variabler
	string str1, str2, str3;
	string displayName1, displayName2, displayName3;

	cout << "Please enter your city with white space between: " << endl;

	cin >> str1 >> str2 >> str3;

	cout << "Your cities are: " << str1 << ", " << str2 << ", " << str3 << ", " << "\n";
	//-------------------------------------------------------------------------------
	// Om string str1 är mindre än str2 och str1 är mindre än str3 sortera detta om str2 är mindre än str3 annars sorterar vi i en anann ordning.
	//-------------------------------------------------------------------------------

	if (str1 < str2 && str1 < str3) {

		if (str2 < str3) {
			displayName1 = str1;
			displayName2 = str2;
			displayName3 = str3;
		}

		else if (str2 > str3){

			displayName1 = str1;
			displayName2 = str3;
			displayName3 = str2;
		}

		//-------------------------------------------------------------------------------
		// Om string str2 är mindre än str1 och str2 är mindre än str3 sortera detta om str1 är mindre än str3 annars sorterar vi i en anann ordning.
		//-------------------------------------------------------------------------------
	} else if (str2 < str1 && str2 < str3) {

		if (str1 < str3) {
			displayName1 = str2;
			displayName2 = str1;
			displayName3 = str3;
		}
		else if (str1 > str3) {

			displayName1 = str2;
			displayName2 = str3;
			displayName3 = str1;
		}

		//-------------------------------------------------------------------------------
		// Om string str3 är mindre än str1 och str3 är mindre än str2 sortera detta om str1 är mindre än str2 annars sorterar vi i en anann ordning.
		//-------------------------------------------------------------------------------

	} else if (str3 < str1 && str3 < str2) {

			if (str1 < str2) {
				displayName1 = str3;
				displayName2 = str2;
				displayName3 = str1;
			}
			else if (str1 > str2) {

				displayName1 = str3;
				displayName2 = str2;
				displayName3 = str1;
			}
	}

	cout << "Values sorted : " << displayName1<< ", "  << displayName2 << ", " << displayName3 << endl;

	return 0;
}
