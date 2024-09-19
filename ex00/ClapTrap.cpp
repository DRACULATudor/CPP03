#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), health(10), energy(10), damage(0)
{
    std::cout << ELECTRIC_BLUE << "ClapTrap consrtuctor called" << RESET << std::endl;
};

ClapTrap::~ClapTrap() {
    std::cout << SLATE_GRAY << "ClapTrap deconstructor called" << std::endl;
};

void ClapTrap::setDamage(int val)
{
    this->damage = val;
}

void ClapTrap::setEnergy(int val)
{
    this->energy = val;
}

void ClapTrap::setHealth(int val)
{
    this->health = val;
}

std::string ClapTrap::getName() const
{
    return this->name;
}

int ClapTrap::getHealth() const
{
    return this->health;
}

int ClapTrap::getEnergy() const
{
    return this->energy;
}

int ClapTrap::getDamage() const
{
    return this->damage;
}

void ClapTrap::attack(const std::string &target)
{
    if (getEnergy() > 0)
    {
        std::cout << "ClapTrap " << DEEP_PURPLE << getName()
                  << RESET << " attacks " << SLATE_GRAY << target << RESET << " causing "
                  << ELECTRIC_BLUE << getDamage() << RESET << " points of damage! " << std::endl;

        setEnergy(getEnergy() - 1);
    }
    else
        std::cout << "No Energy left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int hp = getHealth() - amount;
    if (hp - amount < 0)
        hp = 0;
    setHealth(hp);
    std::cout << DEEP_PURPLE << getName() 
    << " now has: " << getHealth() << " health points, after the attack of " << ELECTRIC_BLUE << amount << " damge points\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergy() <= 0)
        std::cout << "No Energy left" << std::endl;
    else
    {
        int repair = getHealth() + amount;
        setEnergy(getEnergy() - 1);
        setHealth(repair);
        std::cout << LAVENDER << getName() << " now has: " 
        << getHealth() << " health points, after the recovery of " << ELECTRIC_BLUE << amount << " health points\n";
    }
}