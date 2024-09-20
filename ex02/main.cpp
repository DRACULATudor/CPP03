#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// att is 30

int main(void)
{
    ClapTrap Optimus("Terminator");
    ScavTrap Prime("Joey Diaz");
    FragTrap Robocop("Joe Rogan");

    Optimus.attack("Joey Diaz");
    Prime.takeDamage(30);
    Optimus.beRepaired(30);
    Robocop.attack("Terminator");
    Optimus.takeDamage(30);
    Robocop.attack("Joey Diaz");
    Prime.takeDamage(30);
    Prime.beRepaired(30);
    Robocop.highFiveGuys();
    Robocop.beRepaired(30);
    Prime.guardGate();
    Prime.beRepaired(30);

    Optimus.attack("Joey Diaz");
    Prime.takeDamage(30);
    Optimus.attack("Joe Rogan");
    Robocop.takeDamage(30);

    Prime.guardGate();
    Prime.attack("Terminator");
    Optimus.takeDamage(30);
    Prime.attack("Joe Rogan");
    Robocop.takeDamage(30);

    Robocop.highFiveGuys();
    Robocop.attack("Terminator");
    Optimus.takeDamage(30);
    Robocop.attack("Joey Diaz");
    Prime.takeDamage(30);
}