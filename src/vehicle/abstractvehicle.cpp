#include "abstractvehicle.h"

AbstractVehicle::AbstractVehicle(const VechicleType vehicleType) {}

float AbstractVehicle::maxSpeed() const { return _maxSpeed; }

void AbstractVehicle::setMaxSpeed(const float speed) { _maxSpeed = speed; }

int AbstractVehicle::doorsCount() const { return _doorsCount; }

void AbstractVehicle::setDoorsCount(const int count) { _doorsCount = count; }

VechicleType AbstractVehicle::vehicleType() const { return _vehicleType; }
