#pragma once
#include "Builder.hpp"
#include "House.hpp"
#include <iostream>

class BrickHouseBuilder : public Builder {

public:
	void reset() override;

	void setMaterial() override;

	void buildWalls() override;

	void buildRoof() override;

	void buildFloors() override;

	void buildRooms() override;

	std::shared_ptr<House> getResult();

private:
	std::shared_ptr<House> house;
};
