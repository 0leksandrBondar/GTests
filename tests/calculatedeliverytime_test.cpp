#include <gtest/gtest.h>

#include "deliverycompany.h"
#include "vehicle/abstractvehicle.h"


class CalculateDeliveryTime : public ::testing::TestWithParam<std::pair<AbstractVehicle, float>>
{
public:
    DeliveryCompany _deliveryCompany;

};

TEST_P(CalculateDeliveryTime, calculateDeliveryTimee_test)
{
    const auto [vehicleType, expectTime] = GetParam();

    EXPECT_EQ(_deliveryCompany.calculateDeliveryTime(&vehicleType), expectTime);
}

INSTANTIATE_TEST_SUITE_P(calcualteDeliveryTime, CalculateDeliveryTime,
                         ::testing::Values(std::pair{ AbstractVehicle(VechicleType::Car), 4.0 },
                                           std::pair{ AbstractVehicle(VechicleType::Plane), 1.0 },
                                           std::pair{ AbstractVehicle(VechicleType::Ship), 6.0 }));
