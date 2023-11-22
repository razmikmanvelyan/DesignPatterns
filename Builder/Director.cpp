#include "Director.h"

Director::Director(Builder* builder) : builder(builder) {}

void Director::construct() {
    builder->reset();
    builder->setMaterial();
    builder->buildWalls();
    builder->buildRoof();
    builder->buildFloors();
    builder->buildRooms();
}