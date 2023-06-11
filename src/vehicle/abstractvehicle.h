#pragma once

enum class VechicleType
{
    Car,
    Ship,
    Plane,
    Undefined
};

class AbstractVehicle
{
public:
    AbstractVehicle(const VechicleType vehicleType = VechicleType::Undefined);

    float maxSpeed() const;
    void setMaxSpeed(const float speed);

    int doorsCount() const;
    void setDoorsCount(const int count);

    VechicleType vehicleType() const;

    float delivetyTime() const;
    void setDeliveryTime(const float time);

private:
    int _doorsCount{ 4 };
    float _maxSpeed{ 100 };
    float _deliveryTime{ 2.0 };
    VechicleType _vehicleType{ VechicleType::Undefined };
};
