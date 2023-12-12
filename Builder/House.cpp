#include "House.hpp"

Material House::getMaterial() const {
    return material;
}

const std::string& House::getWalls() const {
    return walls;
}

const std::string& House::getRoof() const {
    return roof;
}

int House::getFloors() const {
    return floors;
}

int House::getRooms() const {
    return rooms;
}

void House::setMaterial(Material material) {
    this->material = material;
}

void House::setWalls(const std::string& walls) {
    this->walls = walls;
}

void House::setRoof(const std::string& roof) {
    this->roof = roof;
}

void House::setFloors(int floors) {
    this->floors = floors;
}

void House::setRooms(int rooms) {
    this->rooms = rooms;
}