#include "CompositeTest.hpp"

void testComposite() {
    auto john = std::make_shared<Employee>("John");
    auto sarah = std::make_shared<Employee>("Sarah");

    // Create composite objects (departments) with shared_ptr
    auto engineering = std::make_shared<Department>("Engineering");
    auto marketing = std::make_shared<Department>("Marketing");

    // Add employees to the Engineering department
    engineering->add(john);
    engineering->add(sarah);

    // Create a top-level organization composite with shared_ptr
    auto organization = std::make_shared<Department>("Our Organization");

    // Add departments to the organization
    organization->add(engineering);
    organization->add(marketing);

    // Display the entire organization hierarchy
    organization->display();
}