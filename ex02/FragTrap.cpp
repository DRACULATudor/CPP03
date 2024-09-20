#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << GREEN << getName() << "FragTrap constructor called" << RESET << std::endl;
    getHealth();
    getDamage();
    getEnergy();
}

FragTrap::~FragTrap()
{
    std::cout << GREEN << getName() << "FragTrap deconstuctor called" << RESET << std::endl;
}

void FragTrap::highFiveGuys(void)
{
    std::cout << YELLOW << "Can you give me a high five pls ?" << std::endl;
}
