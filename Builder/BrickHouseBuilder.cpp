#include "BrickHouseBuilder.hpp"

void BrickHouseBuilder::reset()  {
	this->house = std::make_shared<House>();
}

void BrickHouseBuilder::setMaterial() {
	this->house->setMaterial(Material::BRICK);
}

void BrickHouseBuilder::buildWalls() {
	this->house->setWalls("Brick walls");
}

void BrickHouseBuilder::buildRoof() {
	this->house->setRoof("Brick roof");
}

void BrickHouseBuilder::buildFloors() {
	this->house->setFloors(2);
}

void BrickHouseBuilder::buildRooms() {
	this->house->setRooms(5);
}

std::shared_ptr<House> BrickHouseBuilder::getResult() {
	return this->house;
}