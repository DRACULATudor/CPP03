#include "DiamondTrap.hpp"

int main()
{
    

    // Demonstrate functionality
    ClapTrap Optimus("Terminator");
    ScavTrap Prime("Joey Diaz");
    FragTrap Robocop("Joe Rogan");
    DiamondTrap diamondtrap("Final Boss");

    Optimus.attack("Joey Diaz");
    Prime.takeDamage(10);
    Optimus.takeDamage(10);
    Optimus.attack("Final boss");
    diamondtrap.takeDamage(10);
    Robocop.attack("Terminator");
    Optimus.takeDamage(30);
    diamondtrap.attack("Joe Rogan");
    Robocop.takeDamage(30);
    Robocop.attack("Final Boss");
    diamondtrap.takeDamage(30);
    diamondtrap.beRepaired(30);
    Robocop.highFiveGuys();
    Robocop.beRepaired(30);
    Prime.guardGate();
    Prime.beRepaired(30);
    diamondtrap.highFiveGuys();
    diamondtrap.guardGate();

    Optimus.attack("Joey Diaz");
    Prime.takeDamage(30);
    Optimus.attack("Joe Rogan");
    Robocop.takeDamage(30);
    diamondtrap.whoAmI();

    Prime.guardGate();
    diamondtrap.attack("Terminator");
    Optimus.takeDamage(30);
    Prime.attack("Joe Rogan");
    Robocop.takeDamage(30);

    Robocop.highFiveGuys();
    Robocop.attack("Terminator");
    Optimus.takeDamage(30);
    Robocop.attack("Joey Diaz");
    Prime.takeDamage(30);
}
