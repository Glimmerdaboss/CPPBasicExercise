// Ude_Funtions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


namespace std {

	//Price of items
	const double priceShirt = 0.99;
	const double pricePants = 1.95;
	const double priceOtherItems = 3.25;

	string GetCustomerName() {

		string firstName, lastName, fullName;
		cout << "Enter customer identification \n" << endl;
		cout << "First Name: " << flush; cin >> firstName;
		cout << "Last Name: " << flush; cin >> lastName;
		fullName = firstName + " " + lastName;

		return fullName;
	}


	int RequestNumberOfShirts() {
		
		int shirts;
		cout << "Numbers of shirts: " << flush;
		cin >> shirts;

		return shirts;
	}

	int RequestNumberOfPants() {

		int pants;
		cout << "Numbers of pants: " << flush;
		cin >> pants;

		return pants;
	}

	int ReqestNumbersOfOtheritems() {

		int items;
		cout << "Numbers of items: " << flush;
		cin >> items;

		return items;
	}

	double CalcaulateDiscount() {

		double discount;
		cout << "Write in your customers discount: " << flush;
		cin >> discount;

		return discount;
	}
}

void Welcome() {

	cout << "Welcome to Gerogetown cleaning services -\n" << endl;
}

int main()
{
	// Welcome the customer
	Welcome();

	// Declare the number of items
	string customerName;
	int numbersOfShirts, numberOfPants, numberOfOtherItems;
	
	// Delclare total prices by category
	double totalPriceshirt, totalPricePants, totalPriceOther;
		
	// Delclare total discounts on prices
	double totalCustomerDiscount, totalAfterCustomerDiscount;

	// Sums all of the choosen products
	double totalOrder;

	// Saves return results from methods(functions)
	
	customerName = GetCustomerName();
	numbersOfShirts = RequestNumberOfShirts();
	numberOfPants = RequestNumberOfPants();
	numberOfOtherItems = ReqestNumbersOfOtheritems();
	totalCustomerDiscount = CalcaulateDiscount();

	// Calculatethe for the diffrence customer
	totalPricePants = pricePants * numberOfPants;
	totalPriceshirt = priceShirt * numbersOfShirts;
	totalPriceOther = priceOtherItems * numberOfOtherItems;
	totalOrder = totalPriceshirt + totalPricePants + totalPriceOther;
	totalCustomerDiscount = totalOrder * (totalCustomerDiscount / 100);
	totalAfterCustomerDiscount = (totalOrder)-(totalCustomerDiscount);

	// Display the result
	cout << "\n==================================";
	cout << "\n - Georgetown Cleaning Services -";
	cout << "\n----------------------------------";
	cout << "\nCustomer Name: " << customerName;
	cout << "\n----------------------------------";
	cout << "\nItem Type\t#\tUnit Price";
	cout << "\nShirts\t\t" << numbersOfShirts << "\t" << priceShirt;
	cout << "\nPants\t\t" << numberOfPants << "\t" << pricePants;
	cout << "\nOthers\t\t" << numberOfOtherItems << "\t" << priceOtherItems;
	cout << "\n----------------------------------";
	cout << "\nTotal Order: $" << fixed << setprecision(2) << totalOrder;
	cout << "\nTotal Discount Order: $" << fixed << setprecision(2) << totalCustomerDiscount;
	cout << "\nTotal After Discount Order: $" << fixed << setprecision(2) << totalAfterCustomerDiscount;
	cout << "\n==================================" << endl;
	
	return 0;
}