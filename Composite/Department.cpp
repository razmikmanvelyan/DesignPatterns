#include "Department.h"

void Department::display() {
    std::cout << "Department: " << name << std::endl;
    for (const auto& subunit : subunits) {
        subunit->display();
    }
}

void Department::add(const std::shared_ptr<OrganizationComponent>& component) {
    subunits.push_back(component);
}

void Department::remove(const std::shared_ptr<OrganizationComponent>& component) {
    auto it = std::find(subunits.begin(), subunits.end(), component);
    if (it != subunits.end()) {
        subunits.erase(it);
    }
}