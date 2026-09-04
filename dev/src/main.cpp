#include "Helper.h"
#include <iostream>
#include <cstdlib>

void DisplayMainMenu()
{
	std::cout << "\n=============================================\n";
	std::cout << " Vehicle Service & Maintenance Management\n";
	std::cout << "=============================================\n";
	std::cout << "1. Add Vehicle\n";
	std::cout << "2. View Vehicles\n";
	std::cout << "3. Add Service Record\n";
	std::cout << "4. View Service Records\n";
	std::cout << "5. Exit\n";
	std::cout << "=============================================\n";
	std::cout << "Enter your selection: ";
}

int GetMenuChoice()
{
	char input[50];

	while (true)
	{
		DisplayMainMenu();

		std::cin.getline(input, 50);

		if (!Helper::IsInteger(input))
		{
			std::cout << "\nInvalid input. Please enter a number from 1 to 5.\n";
			continue;
		}

		int choice = std::atoi(input);

		if (choice >= 1 && choice <= 5)
		{
			return choice;
		}

		std::cout << "\nInvalid selection. Please enter a number from 1 to 5.\n";
	}
}

int main()
{
	bool running = true;

	while (running)
	{
		int choice = GetMenuChoice();

		switch (choice)
		{
		case 1:
			std::cout << "\nAdd Vehicle selected.\n";
			break;

		case 2:
			std::cout << "\nView Vehicles selected.\n";
			break;

		case 3:
			std::cout << "\nAdd Service Record selected.\n";
			break;

		case 4:
			std::cout << "\nView Service Records selected.\n";
			break;

		case 5:
			std::cout << "\nExiting Vehicle Service & Maintenance Management System.\n";
			running = false;
			break;
		}
	}

	return 0;
}