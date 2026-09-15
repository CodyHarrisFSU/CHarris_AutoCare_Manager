#include "ServiceType.h"

ServiceType::ServiceType()
{
    name = "";
    minimumCost = 0.0;
    maximumCost = 0.0;
}

ServiceType::ServiceType(
    const std::string& serviceName,
    double minCost,
    double maxCost)
{
    name = serviceName;
    minimumCost = minCost;
    maximumCost = maxCost;
}

std::string ServiceType::GetName() const
{
    return name;
}

double ServiceType::GetMinimumCost() const
{
    return minimumCost;
}

double ServiceType::GetMaximumCost() const
{
    return maximumCost;
}

void ServiceType::SetName(const std::string& serviceName)
{
    name = serviceName;
}

void ServiceType::SetMinimumCost(double minCost)
{
    minimumCost = minCost;
}

void ServiceType::SetMaximumCost(double maxCost)
{
    maximumCost = maxCost;
}

bool ServiceType::HasVariableCost() const
{
    return minimumCost != maximumCost;
}