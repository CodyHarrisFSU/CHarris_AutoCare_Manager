#include "MaintenanceManager.h"

MaintenanceManager::MaintenanceManager()
{
}

void MaintenanceManager::AddVehicle(const Vehicle& vehicle)
{
    vehicles.push_back(vehicle);
}

void MaintenanceManager::AddServiceRecord(const ServiceRecord& record)
{
    serviceRecords.push_back(record);
}

bool MaintenanceManager::RemoveServiceRecord(int serviceID)
{
    ServiceRecord* record = FindServiceRecordByID(serviceID);

    if (record == nullptr)
    {
        return false;
    }

    if (record->IsRemoved())
    {
        return false;
    }

    record->SetRemoved(true);
    return true;
}

const std::vector<Vehicle>& MaintenanceManager::GetVehicles() const
{
    return vehicles;
}

const std::vector<ServiceRecord>& MaintenanceManager::GetServiceRecords() const
{
    return serviceRecords;
}

Vehicle* MaintenanceManager::FindVehicleByID(int vehicleID)
{
    for (Vehicle& vehicle : vehicles)
    {
        if (vehicle.GetVehicleID() == vehicleID)
        {
            return &vehicle;
        }
    }

    return nullptr;
}

ServiceRecord* MaintenanceManager::FindServiceRecordByID(int serviceID)
{
    for (ServiceRecord& record : serviceRecords)
    {
        if (record.GetServiceID() == serviceID)
        {
            return &record;
        }
    }
        
    return nullptr;
}