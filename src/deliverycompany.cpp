#include "deliverycompany.h"

#include "vehicle/abstractvehicle.h"

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

float DeliveryCompany::calculateDeliveryTime(const Location from, const Location to) const
{
    return 0.0;
}
