#pragma once

#include <string>

class AbstractVehicle;

enum class Location
{
    Japan,
    China,
    Poland,
    Germany,
    Ukraine,
};

class DeliveryCompany
{
public:
    DeliveryCompany();

    void createDeliveryRequest(const Location from, const Location to,
                               const AbstractVehicle *vehicle);

    std::string convertLacationToString(const Location location) const;

    float calculateDeliveryTime(const AbstractVehicle *AbstractVehicle) const;
private:
    std::string _delyveryRequestInfo;
};
