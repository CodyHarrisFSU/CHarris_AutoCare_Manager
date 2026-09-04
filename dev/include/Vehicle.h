#pragma once

#include <string>

class Vehicle
{
private:
    int vehicleID;
    int year;
    std::string make;
    std::string model;
    int mileage;

public:
    Vehicle();
    Vehicle(int id, int vehicleYear, const std::string& vehicleMake,
        const std::string& vehicleModel, int vehicleMileage);

    int GetVehicleID() const;
    int GetYear() const;
    std::string GetMake() const;
    std::string GetModel() const;
    int GetMileage() const;

    void SetVehicleID(int id);
    void SetYear(int vehicleYear);
    void SetMake(const std::string& vehicleMake);
    void SetModel(const std::string& vehicleModel);
    void SetMileage(int vehicleMileage);
};