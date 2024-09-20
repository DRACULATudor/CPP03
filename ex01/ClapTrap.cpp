#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), health(100), energy(50), damage(20)
{
    std::cout << ELECTRIC_BLUE << "ClapTrap consrtuctor called" << RESET << std::endl;
};

ClapTrap::~ClapTrap()
{
    std::cout << ELECTRIC_BLUE << "ClapTrap deconstructor called" << std::endl;
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
        std::cout << "ClapTrap " << ELECTRIC_BLUE << getName()
                  << RESET << " attacks " << DEEP_PURPLE << target << RESET << " causing "
                  << SLATE_GRAY << getDamage() << RESET << " points of damage! " << std::endl;

        setEnergy(getEnergy() - 1);
    }
    else
        std::cout << "No Energy left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (getHealth() - amount > 0)
    {

        int hp = getHealth() - amount;
        if (hp - amount < 0)
            hp = 0;
        setHealth(hp);
        std::cout << ELECTRIC_BLUE << getName() << RESET
                  << " now has: " << getHealth() << " health points, after the attack of " << SLATE_GRAY << amount << RESET << " damge points\n";
    }
    else
    {
        std::cout << getName() << " has fallen " << std::endl;
        exit(0);
    }
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergy() <= 0)
        std::cout << "Clap Trap has no Energy left" << std::endl;
    else
    {
        int repair = getHealth() + amount;
        setEnergy(getEnergy() - 1);
        setHealth(repair);
        std::cout << ELECTRIC_BLUE << getName() << RESET << " now has: "
                  << getHealth() << " health points, after the recovery of " << SLATE_GRAY << amount << RESET << " health points\n";
    }
}