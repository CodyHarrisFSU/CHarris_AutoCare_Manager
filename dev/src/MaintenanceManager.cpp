#include "MaintenanceManager.h"

MaintenanceManager::MaintenanceManager()
{
    serviceTypes.push_back(
        ServiceType(
            "Oil Change/Tune-Up",
            250.00,
            250.00
        )
    );

    serviceTypes.push_back(
        ServiceType(
            "Stage 3 Clutch w/ Full Exhaust + Turbo",
            5000.00,
            5000.00
        )
    );

    serviceTypes.push_back(
        ServiceType(
            "Stage 3 Turbo w/ Full Exhaust inc. 55mm TB, Piston, INJ, & Dyno",
            15000.00,
            15000.00
        )
    );

    serviceTypes.push_back(
        ServiceType(
            "TunerRidz Tuner Tablet",
            5000.00,
            5000.00
        )
    );

    serviceTypes.push_back(
        ServiceType(
            "Custom Pack",
            7500.00,
            20000.00
        )
    );
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
    ServiceRecord* record =
        FindServiceRecordByID(serviceID);

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

void MaintenanceManager::AddServiceType(
    const ServiceType& serviceType)
{
    serviceTypes.push_back(serviceType);
}

const std::vector<Vehicle>&
MaintenanceManager::GetVehicles() const
{
    return vehicles;
}

const std::vector<ServiceRecord>&
MaintenanceManager::GetServiceRecords() const
{
    return serviceRecords;
}

const std::vector<ServiceType>&
MaintenanceManager::GetServiceTypes() const
{
    return serviceTypes;
}

Vehicle* MaintenanceManager::FindVehicleByID(
    int vehicleID)
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

ServiceRecord*
MaintenanceManager::FindServiceRecordByID(
    int serviceID)
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