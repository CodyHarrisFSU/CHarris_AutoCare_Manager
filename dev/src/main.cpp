#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>
#include <ctime>
#include <cctype>
#define NOMINMAX
#include <Windows.h>

#include "MaintenanceManager.h"
#include "Vehicle.h"
#include "ServiceRecord.h"
#include "ServiceType.h"

// ============================================================
// Console Display Helpers
// ============================================================

void DisplayMainMenu()
{
    std::cout
        << "\n========================================\n"
        << "  Vehicle Service & Maintenance Management\n"
        << "========================================\n"
        << "1. Add Vehicle\n"
        << "2. View Vehicles\n"
        << "3. Add Service Record\n"
        << "4. View Service Records\n"
        << "5. View Vehicle Service History\n"
        << "6. Remove Service Record\n"
        << "7. Exit\n"
        << "========================================\n";
}

void DisplayRemovedStamp()
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

    // Red text
    SetConsoleTextAttribute(
        consoleHandle,
        FOREGROUND_RED | FOREGROUND_INTENSITY
    );

    std::cout
        << "===============================\n"
        << "            REMOVED\n"
        << "===============================\n";

    // Restore normal console color
    SetConsoleTextAttribute(
        consoleHandle,
        FOREGROUND_RED |
        FOREGROUND_GREEN |
        FOREGROUND_BLUE
    );
}


// ============================================================
// Input Validation Helpers
// ============================================================

int GetValidatedInteger(const std::string& prompt)
{
    int value;

    while (true)
    {
        std::cout << prompt;

        if (std::cin >> value)
        {
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            return value;
        }

        std::cout
            << "Invalid input. Please enter a whole number.\n";

        std::cin.clear();

        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(),
            '\n'
        );
    }
}

int GetPositiveInteger(const std::string& prompt)
{
    while (true)
    {
        int value = GetValidatedInteger(prompt);

        if (value > 0)
        {
            return value;
        }

        std::cout
            << "Value must be greater than 0.\n";
    }
}

int GetNonNegativeInteger(const std::string& prompt)
{
    while (true)
    {
        int value = GetValidatedInteger(prompt);

        if (value >= 0)
        {
            return value;
        }

        std::cout
            << "Value cannot be negative.\n";
    }
}

double GetValidatedDouble(const std::string& prompt)
{
    double value;

    while (true)
    {
        std::cout << prompt;

        if (std::cin >> value)
        {
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(),
                '\n'
            );

            return value;
        }

        std::cout
            << "Invalid input. Please enter a valid number.\n";

        std::cin.clear();

        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(),
            '\n'
        );
    }
}

double GetNonNegativeDouble(const std::string& prompt)
{
    while (true)
    {
        double value = GetValidatedDouble(prompt);

        if (value >= 0.0)
        {
            return value;
        }

        std::cout
            << "Value cannot be negative.\n";
    }
}

std::string GetRequiredText(const std::string& prompt)
{
    std::string value;

    while (true)
    {
        std::cout << prompt;
        std::getline(std::cin, value);

        if (!value.empty())
        {
            return value;
        }

        std::cout
            << "This field cannot be empty.\n";
    }
}

int GetValidatedYear(const std::string& prompt)
{
    std::time_t currentTime = std::time(nullptr);
    std::tm localTime{};

    localtime_s(&localTime, &currentTime);

    int currentYear =
        localTime.tm_year + 1900;

    while (true)
    {
        int year = GetValidatedInteger(prompt);

        if (year >= 1886 &&
            year <= currentYear + 1)
        {
            return year;
        }

        std::cout
            << "Please enter a valid vehicle year between "
            << 1886
            << " and "
            << currentYear + 1
            << ".\n";
    }
}

int GetMenuChoice()
{
    while (true)
    {
        int choice =
            GetValidatedInteger("Enter your selection: ");

        if (choice >= 1 && choice <= 7)
        {
            return choice;
        }

        std::cout
            << "Invalid selection. Please choose 1 through 7.\n";
    }
}

char GetYesNoChoice(const std::string& prompt)
{
    while (true)
    {
        std::string input =
            GetRequiredText(prompt);

        if (input.length() == 1)
        {
            char choice =
                static_cast<char>(
                    std::toupper(
                        static_cast<unsigned char>(input[0])
                    )
                    );

            if (choice == 'Y' || choice == 'N')
            {
                return choice;
            }
        }

        std::cout
            << "Invalid selection. Please enter Y or N.\n";
    }
}


// ============================================================
// Vehicle Display
// ============================================================

void DisplayVehicle(const Vehicle& vehicle)
{
    std::cout
        << "Vehicle ID: "
        << vehicle.GetVehicleID() << "\n"
        << "Vehicle: "
        << vehicle.GetYear() << " "
        << vehicle.GetMake() << " "
        << vehicle.GetModel() << "\n"
        << "Current Mileage: "
        << vehicle.GetMileage() << "\n";
}


// ============================================================
// Service Record Display
// ============================================================

void DisplayServiceRecord(
    const ServiceRecord& record,
    bool showVehicleID = true)
{
    std::cout
        << "Service Record ID: "
        << record.GetServiceID() << "\n";

    if (showVehicleID)
    {
        std::cout
            << "Vehicle ID: "
            << record.GetVehicleID() << "\n";
    }

    std::cout
        << "Service Type: "
        << record.GetServiceType() << "\n"
        << "Service Date: "
        << record.GetServiceDate() << "\n"
        << "Service Cost: $"
        << std::fixed
        << std::setprecision(2)
        << record.GetServiceCost() << "\n"
        << "Mileage at Service: "
        << record.GetServiceMileage() << "\n";

    if (record.IsRemoved())
    {
        DisplayRemovedStamp();
    }
}


// ============================================================
// Service Type Library
// ============================================================

void DisplayServiceTypeLibrary(
    const MaintenanceManager& manager)
{
    const std::vector<ServiceType>& serviceTypes =
        manager.GetServiceTypes();

     std::cout
        << "\n========== Service Type Library ==========\n";

    for (size_t i = 0;
        i < serviceTypes.size();
        ++i)
    {
        const ServiceType& service =
            serviceTypes[i];

        std::cout
            << (i + 1)
            << ". "
            << service.GetName()
            << " - $"
            << std::fixed
            << std::setprecision(2)
            << service.GetMinimumCost();

        if (service.HasVariableCost())
        {
            std::cout
                << " - $"
                << service.GetMaximumCost();
        }

        std::cout << "\n";
    }

    std::cout
        << (serviceTypes.size() + 1)
        << ". Add Custom Service Type\n";

    std::cout
        << "==========================================\n";
}

double GetServiceCost(
    const ServiceType& serviceType)
{
    if (!serviceType.HasVariableCost())
    {
        return serviceType.GetMinimumCost();
    }

    while (true)
    {
        std::cout
            << "Enter service cost ($"
            << std::fixed
            << std::setprecision(2)
            << serviceType.GetMinimumCost()
            << " - $"
            << serviceType.GetMaximumCost()
            << "): ";

        double cost =
            GetValidatedDouble("");

        if (cost >= serviceType.GetMinimumCost() &&
            cost <= serviceType.GetMaximumCost())
        {
            return cost;
        }

        std::cout
            << "Cost must be between $"
            << serviceType.GetMinimumCost()
            << " and $"
            << serviceType.GetMaximumCost()
            << ".\n";
    }
}

ServiceType CreateCustomServiceType()
{
    std::cout
        << "\n========== Add Custom Service Type ==========\n";

    std::string name =
        GetRequiredText(
            "Enter custom service name: "
        );

    double cost =
        GetNonNegativeDouble(
            "Enter service cost: $"
        );

    std::cout
        << "Custom service type created: "
        << name
        << " - $"
        << std::fixed
        << std::setprecision(2)
        << cost
        << "\n";

    return ServiceType(
        name,
        cost,
        cost
    );
}


// ============================================================
// Add Vehicle
// ============================================================

void AddVehicle(MaintenanceManager& manager)
{
    std::cout
        << "\n========== Add Vehicle ==========\n";

    int vehicleID;

    while (true)
    {
        vehicleID =
            GetPositiveInteger(
                "Enter vehicle ID: "
            );

        if (manager.FindVehicleByID(vehicleID) == nullptr)
        {
            break;
        }

        std::cout
            << "Vehicle ID "
            << vehicleID
            << " already exists. Please use a different ID.\n";
    }

    std::string make =
        GetRequiredText(
            "Enter vehicle make: "
        );

    std::string model =
        GetRequiredText(
            "Enter vehicle model: "
        );

    int year =
        GetValidatedYear(
            "Enter vehicle year: "
        );

    int mileage =
        GetNonNegativeInteger(
            "Enter current mileage: "
        );

    Vehicle vehicle(
        vehicleID,
        year,
        make,
        model,
        mileage
    );

    manager.AddVehicle(vehicle);

    std::cout
        << "\nVehicle added successfully.\n";
}


// ============================================================
// View Vehicles
// ============================================================

void ViewVehicles(const MaintenanceManager& manager)
{
    const std::vector<Vehicle>& vehicles =
        manager.GetVehicles();

    std::cout
        << "\n========== Vehicles ==========\n";

    if (vehicles.empty())
    {
        std::cout
            << "No vehicles have been added.\n";

        return;
    }

    for (const Vehicle& vehicle : vehicles)
    {
        std::cout << "\n";

        DisplayVehicle(vehicle);

        std::cout
            << "-------------------------------------\n";
    }
}


// ============================================================
// Add Service Record
// ============================================================

void AddServiceRecord(MaintenanceManager& manager)
{
    std::cout
        << "\n========== Add Service Record ==========\n";

    if (manager.GetVehicles().empty())
    {
        std::cout
            << "A vehicle must be added before creating "
            << "a service record.\n";

        return;
    }

    int serviceID;

    while (true)
    {
        serviceID =
            GetPositiveInteger(
                "Enter service record ID: "
            );

        if (manager.FindServiceRecordByID(serviceID) == nullptr)
        {
            break;
        }

        std::cout
            << "Service record ID "
            << serviceID
            << " already exists. Please use a different ID.\n";
    }

    int vehicleID;

    while (true)
    {
        vehicleID =
            GetPositiveInteger(
                "Enter vehicle ID: "
            );

        if (manager.FindVehicleByID(vehicleID) != nullptr)
        {
            break;
        }

        std::cout
            << "Vehicle ID "
            << vehicleID
            << " does not exist.\n";
    }

    std::string selectedServiceName;
    double serviceCost = 0.0;

    while (true)
    {
        DisplayServiceTypeLibrary(manager);

        const std::vector<ServiceType>& serviceTypes =
            manager.GetServiceTypes();

        int selection =
            GetPositiveInteger(
                "Select a service type: "
            );

        if (selection >= 1 &&
            selection <= static_cast<int>(serviceTypes.size()))
        {
            const ServiceType& selectedService =
                serviceTypes[selection - 1];

            selectedServiceName =
                selectedService.GetName();

            serviceCost =
                GetServiceCost(selectedService);

            break;
        }

        if (selection ==
            static_cast<int>(serviceTypes.size()) + 1)
        {
            ServiceType customService =
                CreateCustomServiceType();

            manager.AddServiceType(customService);

            selectedServiceName =
                customService.GetName();

            serviceCost =
                customService.GetMinimumCost();

            std::cout
                << "The new service type has been added "
                << "to the Service Type Library.\n";

            break;
        }

        std::cout
            << "Invalid service type selection.\n";
    }

    std::string serviceDate =
        GetRequiredText(
            "Enter service date (MM/DD/YYYY): "
        );

    int serviceMileage =
        GetNonNegativeInteger(
            "Enter mileage at service: "
        );

    ServiceRecord record(
        serviceID,
        vehicleID,
        selectedServiceName,
        serviceDate,
        serviceCost,
        serviceMileage
    );

    manager.AddServiceRecord(record);

    std::cout
        << "\nService record added successfully.\n";
}


// ============================================================
// View Service Records
// ============================================================

void ViewServiceRecords(
    const MaintenanceManager& manager)
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
        std::cout << "\n";

        DisplayServiceRecord(
            record,
            true
        );

        std::cout
            << "-------------------------------------\n";
    }
}


// ============================================================
// Vehicle Service History
// ============================================================

void ViewVehicleServiceHistory(
    MaintenanceManager& manager)
{
    std::cout
        << "\n========== Vehicle Service History ==========\n";

    int vehicleID =
        GetPositiveInteger(
            "Enter vehicle ID: "
        );

    Vehicle* vehicle =
        manager.FindVehicleByID(vehicleID);

    if (vehicle == nullptr)
    {
        std::cout
            << "Vehicle ID "
            << vehicleID
            << " was not found.\n";

        return;
    }

    std::cout
        << "\nVehicle: "
        << vehicle->GetYear() << " "
        << vehicle->GetMake() << " "
        << vehicle->GetModel() << "\n"
        << "Vehicle ID: "
        << vehicle->GetVehicleID() << "\n"
        << "Current Mileage: "
        << vehicle->GetMileage() << "\n"
        << "-------------------------------------\n";

    const std::vector<ServiceRecord>& records =
        manager.GetServiceRecords();

    bool recordFound = false;

    for (const ServiceRecord& record : records)
    {
        if (record.GetVehicleID() == vehicleID)
        {
            recordFound = true;

            std::cout << "\n";

            DisplayServiceRecord(
                record,
                false
            );

            std::cout
                << "-------------------------------------\n";
        }
    }

    if (!recordFound)
    {
        std::cout
            << "No service records were found "
            << "for this vehicle.\n";
    }
}


// ============================================================
// Remove Service Record
// ============================================================

void RemoveServiceRecord(
    MaintenanceManager& manager)
{
    std::cout
        << "\n========== Remove Service Record ==========\n";

    int serviceID =
        GetPositiveInteger(
            "Enter service record ID to remove: "
        );

    ServiceRecord* record =
        manager.FindServiceRecordByID(serviceID);

    if (record == nullptr)
    {
        std::cout
            << "Service record ID "
            << serviceID
            << " was not found.\n";

        return;
    }

   if (record->IsRemoved())
{
    std::cout
        << "\nService record ID "
        << serviceID
        << " is currently marked as REMOVED.\n\n";

    std::cout
        << "1. Cancel Removal Status\n"
        << "2. Return to Main Menu\n";

    int choice = GetValidatedInteger(
        "Enter your selection: ");

    while (choice < 1 || choice > 2)
    {
        std::cout
            << "Invalid selection. Please choose 1 or 2.\n";

        choice = GetValidatedInteger(
            "Enter your selection: ");
    }

    if (choice == 1)
    {
        if (manager.RestoreServiceRecord(serviceID))
        {
            std::cout
                << "Service record ID "
                << serviceID
                << " has been restored.\n";
        }
    }

    return;
}

    std::cout
        << "\nRecord selected:\n"
        << "-------------------------------------\n";

    DisplayServiceRecord(
        *record,
        true
    );

    std::cout
        << "-------------------------------------\n";

    char confirmation =
        GetYesNoChoice(
            "Are you sure you want to remove this record? (Y/N): "
        );

    if (confirmation == 'N')
    {
        std::cout
            << "Removal cancelled.\n";

        return;
    }

    if (manager.RemoveServiceRecord(serviceID))
    {
        std::cout
            << "Service record ID "
            << serviceID
            << " has been marked as removed.\n";
    }
    else
    {
        std::cout
            << "Unable to remove service record.\n";
    }
}


// ============================================================
// Main
// ============================================================

int main()
{
    MaintenanceManager manager;

    bool running = true;

    while (running)
    {
        DisplayMainMenu();

        int choice =
            GetMenuChoice();

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
            RemoveServiceRecord(manager);
            break;

        case 7:
            std::cout
                << "\nExiting AutoCare Manager.\n";

            running = false;
            break;
        }
    }

    return 0;
}