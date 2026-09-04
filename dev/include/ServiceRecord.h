#pragma once

#include <string>

class ServiceRecord
{
private:
    int serviceID;
    int vehicleID;
    std::string serviceType;
    std::string serviceDate;
    double serviceCost;
    int serviceMileage;

public:
    ServiceRecord();

    ServiceRecord(int id, int vehicleId,
        const std::string& type,
        const std::string& date,
        double cost,
        int mileage);

    int GetServiceID() const;
    int GetVehicleID() const;
    std::string GetServiceType() const;
    std::string GetServiceDate() const;
    double GetServiceCost() const;
    int GetServiceMileage() const;

    void SetServiceID(int id);
    void SetVehicleID(int vehicleId);
    void SetServiceType(const std::string& type);
    void SetServiceDate(const std::string& date);
    void SetServiceCost(double cost);
    void SetServiceMileage(int mileage);
};
