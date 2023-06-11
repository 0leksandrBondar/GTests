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
    AbstractVehicle(const VechicleType vehicleType);

    float maxSpeed() const;
    void setMaxSpeed(const float speed);

    int doorsCount() const;
    void setDoorsCount(const int count);

    VechicleType vehicleType() const;

private:
    int _doorsCount{ 4 };
    float _maxSpeed{ 100 };
    VechicleType _vehicleType{ VechicleType::Undefined };
};
