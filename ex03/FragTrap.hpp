#pragma once

#include "ClapTrap.hpp"

//THis problem is the diamond problem, in which the risks are avoiding:
// data duplication (mem waste and incoconsitecies), and ambiguity (the com doesnt know which subobject to acces) 
//using virtual since bith classes inherit from same base class to avoid  
//multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances. 
//This ensures that even though both ScavTrap and FragTrap
// inherit from ClapTrap, the ClapTrap part of DiamondTrap is constructed only once so basically we are avoiding multiple object constercutions
//When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members. 
//A single copy of its data members is shared by all the base classes that use virtual base. 

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(std::string name);
    ~FragTrap();
    void highFiveGuys(void);
};
