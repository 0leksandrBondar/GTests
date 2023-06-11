#include "deliverycompany.h"

#include "vehicle/abstractvehicle.h"
#include <iostream>

#include <cassert>

DeliveryCompany::DeliveryCompany() {}

void DeliveryCompany::createDeliveryRequest(const Location from, const Location to,
                                            const AbstractVehicle *vehicle)
{
}

std::string DeliveryCompany::convertLacationToString(const Location location) const
{
    switch (location)
    {
    case Location::Japan:
        return "Japan";
    case Location::China:
        return "China";
    case Location::Poland:
        return "Poland";
    case Location::Germany:
        return "Germany";
    case Location::Ukraine:
        return "Ukraine";
    }
}

float DeliveryCompany::calculateDeliveryTime(const AbstractVehicle *AbstractVehicle) const
{
    switch (AbstractVehicle->vehicleType())
    {
    case VechicleType::Car:
        return AbstractVehicle->delivetyTime() * 2;
    case VechicleType::Ship:
        return AbstractVehicle->delivetyTime() * 3;
    case VechicleType::Plane:
        return AbstractVehicle->delivetyTime() * 0.5;
    case VechicleType::Undefined:
        assert("Use Undefined VechicleType!");
    }
    return 0.0;
}
