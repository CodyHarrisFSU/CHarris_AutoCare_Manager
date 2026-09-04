#pragma once

#include "Vehicle.h"
#include "ServiceRecord.h"

#include <vector>

class MaintenanceManager
{
private:
    std::vector<Vehicle> vehicles;
    std::vector<ServiceRecord> serviceRecords;

public:
    MaintenanceManager();

    void AddVehicle(const Vehicle& vehicle);
    void AddServiceRecord(const ServiceRecord& record);

    const std::vector<Vehicle>& GetVehicles() const;
    const std::vector<ServiceRecord>& GetServiceRecords() const;

    Vehicle* FindVehicleByID(int vehicleID);
};
