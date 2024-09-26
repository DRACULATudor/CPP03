#include "ClapTrap.hpp"

int main()
{
    //TEST CASE 1
//     ClapTrap robo("Terminator");
//     ClapTrap human("Joe");

//     robo.attack("Joe");
//     human.takeDamage(1);
//     robo.beRepaired(1);
//     human.attack("Terminator");
//     robo.takeDamage(5);
//     human.beRepaired(2);

    //TEST CASE 2
    ClapTrap claptrap("Bot");
    ClapTrap bot = claptrap;

    std::cout << "\nInitial state: \n" << std::endl;
    std::cout << "Name: " << claptrap.getName() << std::endl;
    std::cout << "Health: " << claptrap.getHealth() << std::endl;
    std::cout << "Energy: " << claptrap.getEnergy() << std::endl;
    std::cout << "Damage: " << claptrap.getDamage() << std::endl;
    std::cout << std::endl;

    ClapTrap nob("lol");
    nob = claptrap;
    // Perform an attack
    claptrap.attack("Target1");

    claptrap.takeDamage(0);

    claptrap.beRepaired(3);

    // Display final state
    std::cout << "\nFinal state: \n" << std::endl;
    std::cout << "Name: " << claptrap.getName() << std::endl;
    std::cout << "Health: " << claptrap.getHealth() << std::endl;
    std::cout << "Energy: " << claptrap.getEnergy() << std::endl;
    std::cout << "Damage: " << claptrap.getDamage() << std::endl;
    std::cout << std::endl;

    return(0);
}