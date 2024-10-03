#include "DiamondTrap.hpp"

// CONSTRUCTORS & DESTRUCTOR

DiamondTrap::DiamondTrap() : ClapTrap("Someone_clap_name"), _name("Someone")
{
	std::cout << "DiamondTrap (" << _name << ") default constructor called\n";
    _hitPoints = FragTrap::_hitPoints;
	_energyPoints = 50;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),  _name(name)
{
    std::cout << "DiamondTrap (" << _name << ") name constructor called\n";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = 50;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ScavTrap(copy), FragTrap(copy)
{
    std::cout << "DiamondTrap (" << _name << ") copy constructor called\n";
	_name = copy._name;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap (" << _name << ") default destructor called\n";
}

// OPERATORS

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &copy)
{
    _name = copy._name;
	ClapTrap::_name = copy.ClapTrap::_name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
	_guardGate = copy._guardGate;
	_highFives = copy._highFives;
    std::cout << "DiamondTrap (" << _name << ") copy assignment operator called\n";
	return (*this);
}

// MEMBER FUNCTIONS

void	DiamondTrap::whoAmI()
{
	std::cout << "My REAL name is " << _name << " !\n";
	std::cout << "But in my Family everybody calls me by " << ClapTrap::_name << std::endl;
}

