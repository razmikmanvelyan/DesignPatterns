#include "BuilderTest.h"

void testBuilder() {
	 BrickHouseBuilder brickHouseBuilder;
	 Director director(&brickHouseBuilder);
	 director.construct();
	 std::shared_ptr<House> brickHouse = brickHouseBuilder.getResult();
}