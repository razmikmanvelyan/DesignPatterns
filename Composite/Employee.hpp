#pragma once
#include "OrganizationComponent.hpp"
#include <iostream>
#include <string>

class Employee : public OrganizationComponent {
public:
    Employee(const std::string& name) : name(name) {}

    void display() override;
    
private:
    std::string name;
};