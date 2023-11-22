#pragma once
#include "Builder.h"
#include "House.h"
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
