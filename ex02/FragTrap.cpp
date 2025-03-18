#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap", 100, 100, 30)
{
    std::cout << DEEP_PURPLE << this->getName() << " FragTrap default construtcor called" << RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << DEEP_PURPLE << this->getName() << " FragTrap default name paramter constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) // No need to set member variables explicitly as they are already copied by the base class copy constructor
{
    std::cout << DEEP_PURPLE << this->getName() << " FragTrap copy constructor called" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
    {
        ClapTrap::operator=(copy); // no need to set just call base member operator which will do the job
        std::cout << DEEP_PURPLE << this->getName() << " copy asignment operator FragTrap called" << std::endl;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << DEEP_PURPLE << "FragTrap deconstructor called" << std::endl;
}


void FragTrap::highFiveGuys(void)
{
    std::cout << YELLOW << "Can you give me a high five pls ?" << std::endl;
}
