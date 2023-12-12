#pragma once
#include "OrganizationComponent.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <memory>

class Department : public OrganizationComponent {
public:
    Department(const std::string& name) : name(name) {}

    void display() override;

    void add(const std::shared_ptr<OrganizationComponent>& component);

    void remove(const std::shared_ptr<OrganizationComponent>& component);
    
private:
    std::string name;
    std::vector<std::shared_ptr<OrganizationComponent>> subunits;

};