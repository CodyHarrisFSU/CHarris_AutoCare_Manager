#include "ServiceRecord.h"

ServiceRecord::ServiceRecord()
{
    serviceID = 0;
    vehicleID = 0;
    serviceType = "";
    serviceDate = "";
    serviceCost = 0.0;
    serviceMileage = 0;
}

ServiceRecord::ServiceRecord(int id, int vehicleId,
    const std::string& type,
    const std::string& date,
    double cost,
    int mileage)
{
    serviceID = id;
    vehicleID = vehicleId;
    serviceType = type;
    serviceDate = date;
    serviceCost = cost;
    serviceMileage = mileage;
}

int ServiceRecord::GetServiceID() const
{
    return serviceID;
}

int ServiceRecord::GetVehicleID() const
{
    return vehicleID;
}

std::string ServiceRecord::GetServiceType() const
{
    return serviceType;
}

std::string ServiceRecord::GetServiceDate() const
{
    return serviceDate;
}

double ServiceRecord::GetServiceCost() const
{
    return serviceCost;
}

int ServiceRecord::GetServiceMileage() const
{
    return serviceMileage;
}

void ServiceRecord::SetServiceID(int id)
{
    serviceID = id;
}

void ServiceRecord::SetVehicleID(int vehicleId)
{
    vehicleID = vehicleId;
}

void ServiceRecord::SetServiceType(const std::string& type)
{
    serviceType = type;
}

void ServiceRecord::SetServiceDate(const std::string& date)
{
    serviceDate = date;
}

void ServiceRecord::SetServiceCost(double cost)
{
    serviceCost = cost;
}

void ServiceRecord::SetServiceMileage(int mileage)
{
    serviceMileage = mileage;
}