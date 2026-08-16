#include "Helper.h"
#include <iostream>

int main()
{

	// Test IsInteger
	char input[50];

	std::cout << "Enter an integer: ";
	std::cin.getline(input, 50);

	if (Helper::IsInteger(input))
	{
		std::cout << "Valid integer. \n";
	}

	else
	{
		std::cout << "Invalid integer.\n";
	}


	// Test PrintIntegerBinary
	int number = 42;

	std::cout << "\nBinary for 42:\n";
	Helper::PrintIntegerBinary(&number);


	// Test BubbleSort

	int values[5] = { 5, 2, 8, 1, 3 };

	Helper::BubbleSort(values, 5);

	std::cout << "\nSorted values:\n";

	for (int i - 0; i < 5; ++i)
	{
		std::cout << values[i] << ' ';
	}

	std::cout << '\n';


	// Test ClearInputBuffer
	std::cout << "\nTesting ClearInputBuffer...\n";
	Helper::ClearInputBuffer();


	// Test IsEven

	int evenTest = 10;

	if (Helper::IsEven(&evenTest))
	{
		std::cout << evenTest << " is even.\n";
	}

	else
	{
		std::cout << evenTest << " is not even.\n";
	}

	return 0;

}