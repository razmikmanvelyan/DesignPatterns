#pragma once
class Builder {
public:
	virtual void reset() = 0;
	virtual void setMaterial() = 0;
	virtual void buildWalls() = 0;
	virtual void buildRoof() = 0;
	virtual void buildFloors() = 0;
	virtual void buildRooms() = 0;
};