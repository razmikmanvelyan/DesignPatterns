#include "WoodHouseBuilder.h";

void WoodHouseBuilder::reset() {
	this->house = std::make_shared<House>();
}

void WoodHouseBuilder::setMaterial() {
	this->house->setMaterial(Material::WOOD);
}

void WoodHouseBuilder::buildWalls() {
	this->house->setWalls("Wooden walls");
}

void WoodHouseBuilder::buildRoof() {
	this->house->setRoof("Wooden roof");
}

void WoodHouseBuilder::buildFloors() {
	this->house->setFloors(1);
}

void WoodHouseBuilder::buildRooms() {
	this->house->setRooms(3);
}

std::shared_ptr<House> WoodHouseBuilder::getResult() {
	return this->house;
}