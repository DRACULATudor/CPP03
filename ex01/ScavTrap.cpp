#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap", 100, 50, 20)
{
    std::cout << DEEP_PURPLE << this->getName() << "ScavTrap default construtcor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << DEEP_PURPLE << this->getName() << "ScavTrap default name paramter constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) // No need to set member variables explicitly as they are already copied by the base class copy constructor
{
    std::cout << DEEP_PURPLE << this->getName() << "ScavTrap copy constructor called" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy); // no need to set just call base member operator which will do the job
        std::cout << DEEP_PURPLE << this->getName() << " copy asignment operator ScavTrap called" << std::endl;
    }
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap robot " << DEEP_PURPLE << this->getName() << " has enetered in Gate keeper mode" << RESET << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << DEEP_PURPLE << "ScavTrap deconstructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (getEnergy() > 0 && getDamage() - getHealth() > 0)
    {
        std::cout << "ScavTrap " << DEEP_PURPLE << getName()
                  << RESET << " attacks " << ELECTRIC_BLUE << target << RESET << " doing "
                  << SLATE_GRAY << getDamage() << RESET << " damage! " << std::endl;

        setEnergy(getEnergy() - 1);
    }
    else if (getEnergy() <= 0)
        std::cout << ELECTRIC_BLUE << "ScavTrap has no Energy left" << std::endl;
    else
    {
        setHealth(0);
        std::cout << "This attack will cause the opponent to have negative hp !\n";
    }
}
