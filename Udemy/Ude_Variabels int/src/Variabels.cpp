//============================================================================
// Name        : Variabels.cpp
// Author      : AL
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int numberCats = 5;
	int numberDogs = 7;

	// cout << "hello" << endl;

	cout << "number of cats: " << numberCats << endl; // Hur m�nga katter ?

	cout << "Number of dogs: " << numberDogs << endl; // Hur m�nga hundar ?

	cout << "number of Animals: " << numberCats + numberDogs << endl;

	// Se b�rjan av koden ... cout << "Total number of animals: " << numberCats + numberDogs << endl; // Totalt antal djur.

	cout << "New dog requiered!" << endl; // Ny hund inf�rskaffad

	numberDogs = numberDogs + 1; // Plussar alltid p� en hund

	cout << "New number of dogs: " << numberDogs << endl; // Nytt antal av djur.

	return 0;

}

