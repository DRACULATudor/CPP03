#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _health(10), _energy(10), _damage(0)
{
    std::cout << ELECTRIC_BLUE << this->_name << " ClapTrap default consrtuctor called" << RESET << std::endl;
};

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _damage(0)
{
    std::cout << ELECTRIC_BLUE << this->_name << " ClapTrap parameter default consrtuctor called" << RESET << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &copy) :_name(copy._name), _health(copy._health), _energy(copy._energy), _damage(copy._damage)
{
    std::cout << GREEN << this->_name << " ClapTrap copy consrtuctor called" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    if (this != &obj)
    {
        this->_name = obj._name;
        this->_damage = obj._damage;
        this->_energy = obj._energy;
        this->_health = obj._health;
        std::cout << YELLOW << this->_name << " called the copy assignment operator" << RESET << std::endl;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED << "ClapTrap deconstructor called" << std::endl;
};

void ClapTrap::setDamage(int val)
{
    this->_damage = val;
}

void ClapTrap::setEnergy(int val)
{
    this->_energy = val;
}

void ClapTrap::setHealth(int val)
{
    this->_health = val;
}

std::string ClapTrap::getName() const
{
    return this->_name;
}

int ClapTrap::getHealth() const
{
    return this->_health;
}

int ClapTrap::getEnergy() const
{
    return this->_energy;
}

int ClapTrap::getDamage() const
{
    return this->_damage;
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