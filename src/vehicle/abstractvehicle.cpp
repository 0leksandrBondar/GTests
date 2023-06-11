#include "abstractvehicle.h"

AbstractVehicle::AbstractVehicle(const VechicleType vehicleType) : _vehicleType(vehicleType) {}

float AbstractVehicle::maxSpeed() const { return _maxSpeed; }

void AbstractVehicle::setMaxSpeed(const float speed) { _maxSpeed = speed; }

int AbstractVehicle::doorsCount() const { return _doorsCount; }

void AbstractVehicle::setDoorsCount(const int count) { _doorsCount = count; }

VechicleType AbstractVehicle::vehicleType() const { return _vehicleType; }

float AbstractVehicle::delivetyTime() const { return _deliveryTime; }

void AbstractVehicle::setDeliveryTime(const float time) { _deliveryTime = time; }
