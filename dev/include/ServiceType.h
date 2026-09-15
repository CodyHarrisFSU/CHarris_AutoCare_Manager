#pragma once

#include <string>

class ServiceType
{
private:
    std::string name;
    double minimumCost;
    double maximumCost;

public:
    ServiceType();

    ServiceType(
        const std::string& serviceName,
        double minCost,
        double maxCost
    );

    std::string GetName() const;
    double GetMinimumCost() const;
    double GetMaximumCost() const;

    void SetName(const std::string& serviceName);
    void SetMinimumCost(double minCost);
    void SetMaximumCost(double maxCost);

    bool HasVariableCost() const;
};