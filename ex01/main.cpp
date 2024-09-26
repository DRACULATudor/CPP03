#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap robo("Terminator");
    ClapTrap human("Joe");
    // TEST CASE 1
    //  robo.attack("Joe");
    //  human.takeDamage(20);
    //  robo.beRepaired(15);
    //  human.attack("Terminator");
    //  robo.takeDamage(20);
    //  robo.guardGate();
    //  human.beRepaired(5);

    // TEST CASE 2
    // std::cout << "\nInitial States:" << std::endl;
    // std::cout << "ScavTrap " << robo.getName() << " - Health: " << robo.getHealth() << ", Energy: " << robo.getEnergy() << ", Damage: " << robo.getDamage() << std::endl;
    // std::cout << "ClapTrap " << human.getName() << " - Health: " << human.getHealth() << ", Energy: " << human.getEnergy() << ", Damage: " << human.getDamage() << std::endl;

    // // ScavTrap attack ClapTrap
    // robo.attack("Joe");
    // human.takeDamage(20);

    // // ScavTrap repair
    // robo.beRepaired(15);

    // // ClapTrap attack ScavTrap
    // human.attack("Terminator");
    // robo.takeDamage(20);

    // // ScavTrap enters Gate Keeper
    // robo.guardGate();

    // // ClapTrap repair
    // human.beRepaired(5);

    // std::cout << "\nFinal States:" << std::endl;
    // std::cout << "ScavTrap " << robo.getName() << " - Health: " << robo.getHealth() 
    // << ", Energy: " << robo.getEnergy() << ", Damage: " << robo.getDamage() << std::endl;
    // std::cout << "ClapTrap " << human.getName() << " - Health: " << human.getHealth() 
    // << ", Energy: " << human.getEnergy() << ", Damage: " << human.getDamage() << std::endl;

    //TEST CASE 3
    ScavTrap obj("robo");
    robo = obj;
    while (robo.getEnergy() != 0)
    {
        robo.attack("Joe");
        human.takeDamage(20);
        human.attack("Terminator");
        robo.takeDamage(20);
    }
    robo.attack("Joe");
    human.attack("Terminator");
}