#include <gtest/gtest.h>

#include "vehicle/abstractvehicle.h"

class AbstractVehicleTest : public ::testing::Test
{
public:
    AbstractVehicle _abstractVehicle;
};

TEST_F(AbstractVehicleTest, defaultParametersValuesTest)
{
    EXPECT_EQ(_abstractVehicle.doorsCount(), 4);
    EXPECT_EQ(_abstractVehicle.maxSpeed(), 100);
    EXPECT_EQ(_abstractVehicle.delivetyTime(), 2.0);
    EXPECT_EQ(_abstractVehicle.vehicleType(), VechicleType::Undefined);
}
