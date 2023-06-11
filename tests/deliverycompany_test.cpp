#include "deliverycompany.h"

#include <gtest/gtest.h>

class DeliveryCompanyTest : public ::testing::TestWithParam<std::pair<Location, std::string>>
{
public:
    DeliveryCompany _deliveryCompany;
};

TEST_P(DeliveryCompanyTest, convertLocationToString_test)
{
    const auto [location, strValue] = GetParam();

    EXPECT_EQ(_deliveryCompany.convertLacationToString(location), strValue);
}

INSTANTIATE_TEST_SUITE_P(convertLocationToString, DeliveryCompanyTest,
                         ::testing::Values(std::pair{ Location::China, "China" },
                                           std::pair{ Location::Germany, "Germany" },
                                           std::pair{ Location::Japan, "Japan" },
                                           std::pair{ Location::Poland, "Poland" },
                                           std::pair{ Location::Ukraine, "Ukraine" }));
