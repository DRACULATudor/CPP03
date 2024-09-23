#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + " clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    std::cout << MAGENTA << "DiamonTrap" << RESET << " constructor called" << std::endl;
    setHealth(FragTrap::getHealth());
    setEnergy(ScavTrap::getEnergy());
    setDamage(FragTrap::getDamage());
}

DiamondTrap::~DiamondTrap() {}

void DiamondTrap::attack(const std::string &name)
{
    if (getEnergy() > 0 && getDamage() -  getHealth() > 0)
    {
        std ::cout << "DiamondTrap " << MAGENTA << _name << RESET
                << " has just attacked" << ELECTRIC_BLUE
                << name << RESET << " causing" << getDamage()
                << " damage points !" << std::endl;
        setEnergy(getEnergy() - 1);
    }
    else if (getEnergy() <= 0)
        std::cout << RED << "No energy to perform attack !\n";
    else
        std::cout << RED << "This attack has caused all hp to be below 0\n";
    
}

std::string DiamondTrap::getClname()
{
    return ClapTrap::getName();
}

void DiamondTrap::whoAmI()
{
    std::cout << ELECTRIC_BLUE << "DiamondTrap name is: " << _name 
    << std::endl << MAGENTA << "ClapTrap name is: " << getClname() << RESET << std::endl; 
}
