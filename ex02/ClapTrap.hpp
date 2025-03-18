#pragma once

#include <iomanip>
#include <iostream>
#include <cstdlib>

#define RESET   "\033[0m" //def
#define SLATE_GRAY "\033[38;5;240m"  // Dark Slate Gray
#define ELECTRIC_BLUE "\033[38;5;123m"  // Electric Blue
#define DEEP_PURPLE "\033[38;5;93m"  // Deep Purple
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"     /* Green */
#define YELLOW  "\033[33m"     /*Yellow*/


class ClapTrap
{
protected:
    std::string _name;
    int _health;
    int _energy;
    int _damage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &copy);
    ClapTrap(std::string name, int health, int energy, int damage);
    ClapTrap &operator=(const ClapTrap &obj);
    ~ClapTrap();

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string getName() const;
    int getHealth() const;
    int getEnergy() const;
    int getDamage() const;
    void setName(std::string name);
    void setHealth(int val) ;
    void setEnergy(int val) ;
    void setDamage(int val) ;
};
