#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << DEEP_PURPLE <<"ScavTrap construcot called" << RESET << std::endl;
    setHealth(100);
    setEnergy(50);
    setDamage(20);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap robot " << DEEP_PURPLE << getName()<< RESET << " has enetered in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << DEEP_PURPLE << "Deconstructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (getEnergy() > 0 && getHealth() > 0)
    {
        std::cout << "ScavTrap " << DEEP_PURPLE << getName()
                  << RESET << " attacks " << ELECTRIC_BLUE << target << RESET << " doing "
                  << SLATE_GRAY << getDamage() << RESET << " damage! " << std::endl;

        setEnergy(getEnergy() - 1);
    }
    else
        std::cout << "ScavTrap has no Energy left" << std::endl;
}
