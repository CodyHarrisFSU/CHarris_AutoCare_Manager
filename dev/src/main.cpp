#include "Helper.h"
#include "MaintenanceManager.h"

#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <iomanip>

void DisplayMainMenu()
{
	std::cout << "\n=============================================\n";
	std::cout << " Vehicle Service & Maintenance Management\n";
	std::cout << "=============================================\n";
	std::cout << "1. Add Vehicle\n";
	std::cout << "2. View Vehicles\n";
	std::cout << "3. Add Service Record\n";
	std::cout << "4. View Service Records\n";
	std::cout << "5. View Vehicle Service History\n";
	std::cout << "6. Exit\n";
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
			std::cout
				<< "\nInvalid input. Please enter a number from 1 to 6.\n";
			continue;
		}

		int choice = std::atoi(input);

		if (choice >= 1 && choice <= 6)
		{
			return choice;
		}

		std::cout
			<< "\nInvalid selection. Please enter a number from 1 to 6.\n";
	}
}

int GetValidatedInteger(const char* prompt)
{
	char input[100];

	while (true)
	{
		std::cout << prompt;
		std::cin.getline(input, 100);

		if (Helper::IsInteger(input))
		{
			return std::atoi(input);
		}

		std::cout
			<< "Invalid input. Please enter a whole number.\n";
	}
}

double GetValidatedDouble(const char* prompt)
{
	std::string input;

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);

		try
		{
			size_t position;
			double value = std::stod(input, &position);

			if (position == input.length() && value >= 0.0)
			{
				return value;
			}
		}
		catch (...)
		{
		}

		std::cout
			<< "Invalid input. Please enter a valid non-negative number.\n";
	}
}

int GetPositiveInteger(const char* prompt)
{
	while (true)
	{
		int value = GetValidatedInteger(prompt);

		if (value > 0)
		{
			return value;
		}

		std::cout
			<< "Invalid input. Please enter a number greater than 0.\n";
	}
}

int GetNonNegativeInteger(const char* prompt)
{
	while (true)
	{
		int value = GetValidatedInteger(prompt);

		if (value >= 0)
		{
			return value;
		}

		std::cout
			<< "Invalid input. Value cannot be negative.\n";
	}
}

int GetValidatedYear(const char* prompt)
{
	while (true)
	{
		int year = GetValidatedInteger(prompt);

		if (year >= 1886 && year <= 2027)
		{
			return year;
		}

		std::cout
			<< "Invalid vehicle year. Please enter a year from 1886 to 2027.\n";
	}
}

std::string GetRequiredText(const char* prompt)
{
	std::string input;

	while (true)
	{
		std::cout << prompt;
		std::getline(std::cin, input);

		if (!input.empty())
		{
			return input;
		}

		std::cout
			<< "Input cannot be blank. Please try again.\n";
	}
}

void AddVehicle(MaintenanceManager& manager)
{
	std::cout << "\n========== Add Vehicle ==========\n";

	int vehicleID;

	while (true)
	{
		vehicleID = GetPositiveInteger("Enter vehicle ID: ");

		if (manager.FindVehicleByID(vehicleID) == nullptr)
		{
			break;
		}

		std::cout
			<< "Vehicle ID " << vehicleID
			<< " already exists. Please enter a unique vehicle ID.\n";
	}

	int year =
		GetValidatedYear("Enter vehicle year: ");

	std::string make =
		GetRequiredText("Enter vehicle make: ");

	std::string model =
		GetRequiredText("Enter vehicle model: ");

	int mileage =
		GetNonNegativeInteger("Enter current mileage: ");

	Vehicle newVehicle(
		vehicleID,
		year,
		make,
		model,
		mileage
	);

	manager.AddVehicle(newVehicle);

	std::cout << "\nVehicle added successfully.\n";
}

void ViewVehicles(const MaintenanceManager& manager)
{
	const std::vector<Vehicle>& vehicles =
		manager.GetVehicles();

	std::cout << "\n========== Vehicle List ==========\n";

	if (vehicles.empty())
	{
		std::cout << "No vehicles have been added.\n";
		return;
	}

	for (const Vehicle& vehicle : vehicles)
	{
		std::cout << "Vehicle ID: " << vehicle.GetVehicleID() << "\n";
		std::cout << "Year: " << vehicle.GetYear() << "\n";
		std::cout << "Make: " << vehicle.GetMake() << "\n";
		std::cout << "Model: " << vehicle.GetModel() << "\n";
		std::cout << "Mileage: " << vehicle.GetMileage() << "\n";
		std::cout << "----------------------------------\n";
	}
}

void AddServiceRecord(MaintenanceManager& manager)
{
	std::cout << "\n========== Add Service Record ==========\n";

	int vehicleID =
		GetPositiveInteger("Enter vehicle ID: ");

	Vehicle* vehicle =
		manager.FindVehicleByID(vehicleID);

	if (vehicle == nullptr)
	{
		std::cout
			<< "\nVehicle ID " << vehicleID
			<< " was not found.\n"
			<< "Please add the vehicle before creating a service record.\n";

		return;
	}

	int serviceID;

	while (true)
	{
		serviceID =
			GetPositiveInteger("Enter service record ID: ");

		if (manager.FindServiceRecordByID(serviceID) == nullptr)
		{
			break;
		}

		std::cout
			<< "Service record ID " << serviceID
			<< " already exists. Please enter a unique service record ID.\n";
	}

	std::string serviceType =
		GetRequiredText("Enter service type: ");

	std::string serviceDate =
		GetRequiredText("Enter service date: ");

	double serviceCost =
		GetValidatedDouble("Enter service cost: ");

	int serviceMileage =
		GetNonNegativeInteger(
			"Enter vehicle mileage at service: "
		);

	ServiceRecord newRecord(
		serviceID,
		vehicleID,
		serviceType,
		serviceDate,
		serviceCost,
		serviceMileage
	);

	manager.AddServiceRecord(newRecord);

	std::cout
		<< "\nService record added successfully for "
		<< vehicle->GetYear() << " "
		<< vehicle->GetMake() << " "
		<< vehicle->GetModel() << ".\n";
}

void ViewServiceRecords(const MaintenanceManager& manager)
{
	const std::vector<ServiceRecord>& records =
		manager.GetServiceRecords();

	std::cout
		<< "\n========== Service Records ==========\n";

	if (records.empty())
	{
		std::cout
			<< "No service records have been added.\n";

		return;
	}

	for (const ServiceRecord& record : records)
	{
		std::cout
			<< "Service Record ID: "
			<< record.GetServiceID() << "\n";

		std::cout
			<< "Vehicle ID: "
			<< record.GetVehicleID() << "\n";

		std::cout
			<< "Service Type: "
			<< record.GetServiceType() << "\n";

		std::cout
			<< "Service Date: "
			<< record.GetServiceDate() << "\n";

		std::cout
			<< "Service Cost: $"
			<< std::fixed
			<< std::setprecision(2)
			<< record.GetServiceCost() << "\n";

		std::cout
			<< "Mileage at Service: "
			<< record.GetServiceMileage() << "\n";

		std::cout
			<< "-------------------------------------\n";
	}
}

void ViewVehicleServiceHistory(MaintenanceManager& manager)
{
	std::cout
		<< "\n========== Vehicle Service History ==========\n";

	int vehicleID =
		GetPositiveInteger("Enter vehicle ID: ");

	Vehicle* vehicle =
		manager.FindVehicleByID(vehicleID);

	if (vehicle == nullptr)
	{
		std::cout
			<< "\nVehicle ID " << vehicleID
			<< " was not found.\n";

		return;
	}

	std::cout
		<< "\nVehicle: "
		<< vehicle->GetYear() << " "
		<< vehicle->GetMake() << " "
		<< vehicle->GetModel() << "\n";

	std::cout
		<< "Vehicle ID: "
		<< vehicle->GetVehicleID() << "\n";

	std::cout
		<< "Current Mileage: "
		<< vehicle->GetMileage() << "\n";

	std::cout
		<< "---------------------------------------------\n";

	const std::vector<ServiceRecord>& records =
		manager.GetServiceRecords();

	bool recordFound = false;

	for (const ServiceRecord& record : records)
	{
		if (record.GetVehicleID() == vehicleID)
		{
			recordFound = true;

			std::cout
				<< "Service Record ID: "
				<< record.GetServiceID() << "\n";

			std::cout
				<< "Service Type: "
				<< record.GetServiceType() << "\n";

			std::cout
				<< "Service Date: "
				<< record.GetServiceDate() << "\n";

			std::cout
				<< "Service Cost: $"
				<< std::fixed
				<< std::setprecision(2)
				<< record.GetServiceCost() << "\n";

			std::cout
				<< "Mileage at Service: "
				<< record.GetServiceMileage() << "\n";

			std::cout
				<< "---------------------------------------------\n";
		}
	}

	if (!recordFound)
	{
		std::cout
			<< "No service records were found for this vehicle.\n";
	}
}

int main()
{
	MaintenanceManager manager;

	bool running = true;

	while (running)
	{
		int choice = GetMenuChoice();

		switch (choice)
		{
		case 1:
			AddVehicle(manager);
			break;

		case 2:
			ViewVehicles(manager);
			break;

		case 3:
			AddServiceRecord(manager);
			break;

		case 4:
			ViewServiceRecords(manager);
			break;

		case 5:
			ViewVehicleServiceHistory(manager);
			break;

		case 6:
			std::cout
				<< "\nExiting Vehicle Service & Maintenance Management System.\n";

			running = false;
			break;
		}
	}

	return 0;
}