#pragma once

#include "Vehicle.h"
#include "ServiceRecord.h"
#include "ServiceType.h"

#include <vector>

class MaintenanceManager
{
private:
    std::vector<Vehicle> vehicles;
    std::vector<ServiceRecord> serviceRecords;
    std::vector<ServiceType> serviceTypes;

public:
    MaintenanceManager();

    void AddVehicle(const Vehicle& vehicle);
    void AddServiceRecord(const ServiceRecord& record);
    void AddServiceType(const ServiceType& serviceType);
    bool RemoveServiceRecord(int serviceID);
    bool RestoreServiceRecord(int serviceID);

    const std::vector<Vehicle>& GetVehicles() const;
    const std::vector<ServiceRecord>& GetServiceRecords() const;
    const std::vector<ServiceType>& GetServiceTypes() const;

    Vehicle* FindVehicleByID(int vehicleID);
    ServiceRecord* FindServiceRecordByID(int serviceID);
};