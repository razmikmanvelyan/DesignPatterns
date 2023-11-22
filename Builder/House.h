#pragma once
#include <iostream>

enum Material {
    WOOD,
    BRICK
};

class House {

public:

    Material getMaterial() const;
    const std::string& getWalls() const;
    const std::string& getRoof() const;
    int getFloors() const;
    int getRooms() const;

    void setMaterial(Material material);
    void setWalls(const std::string& walls);
    void setRoof(const std::string& roof);
    void setFloors(int floors);
    void setRooms(int rooms);

private:
    Material material;
    std::string walls;
    std::string roof;
    int floors;
    int rooms;
};