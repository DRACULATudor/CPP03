#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap &operator=(const DiamondTrap &obj);
    ~DiamondTrap();
    void attack(const std::string &target);
    void whoAmI();
    std::string getClname();
};
