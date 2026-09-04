#include "Vehicle.h"

Vehicle::Vehicle()
{
    vehicleID = 0;
    year = 0;
    make = "";
    model = "";
    mileage = 0;
}

Vehicle::Vehicle(int id, int vehicleYear, const std::string& vehicleMake,
    const std::string& vehicleModel, int vehicleMileage)
{
    vehicleID = id;
    year = vehicleYear;
    make = vehicleMake;
    model = vehicleModel;
    mileage = vehicleMileage;
}

int Vehicle::GetVehicleID() const
{
    return vehicleID;
}

int Vehicle::GetYear() const
{
    return year;
}

std::string Vehicle::GetMake() const
{
    return make;
}

std::string Vehicle::GetModel() const
{
    return model;
}

int Vehicle::GetMileage() const
{
    return mileage;
}

void Vehicle::SetVehicleID(int id)
{
    vehicleID = id;
}

void Vehicle::SetYear(int vehicleYear)
{
    year = vehicleYear;
}

void Vehicle::SetMake(const std::string& vehicleMake)
{
    make = vehicleMake;
}

void Vehicle::SetModel(const std::string& vehicleModel)
{
    model = vehicleModel;
}

void Vehicle::SetMileage(int vehicleMileage)
{
    mileage = vehicleMileage;
}