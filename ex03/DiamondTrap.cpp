#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DiamondTrap clap_name"), ScavTrap(_name), FragTrap(_name)
{
    std::cout << MAGENTA << "DiamonTrap default " << RESET << " constructor called" << std::endl;
    setHealth(FragTrap::getHealth());
    setEnergy(ScavTrap::getEnergy());
    setDamage(FragTrap::getDamage());
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + " clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    std::cout << MAGENTA << "DiamonTrap" << RESET << " name constructor called" << std::endl;
    setHealth(FragTrap::getHealth());
    setEnergy(ScavTrap::getEnergy());
    setDamage(FragTrap::getDamage());
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy); // no need to set just call base member operator which will do the job
        std::cout << DEEP_PURPLE << this->getName() << " copy asignment operator FragTrap called" << std::endl;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
     std::cout << DEEP_PURPLE << "DiamondTrap deconstructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &name)
{
    ScavTrap::attack(name);
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
