#include "FragTrap.hpp"

// CONSTRUCTORS & DESTRUCTOR

FragTrap::FragTrap() : ClapTrap(), _highFives(0)
{
	std::cout << "FragTrap (" << _name << ") default constructor called\n";
    _hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name), _highFives(0)
{
    std::cout << "FragTrap (" << _name << ") name constructor called\n";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap (" << _name << ") copy constructor called\n";
	_highFives = copy._highFives;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap (" << _name << ") default destructor called\n";
}

// GETTER

int	FragTrap::getHighFives()
{
	return (_highFives);
}

// OPERATORS

FragTrap&	FragTrap::operator=(const FragTrap &copy)
{
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
	_highFives = copy._highFives;
    std::cout << "FragTrap (" << _name << ") copy assignment operator called\n";
	return (*this);
}

// MEMBER FUNCTIONS

void	FragTrap::highFivesGuy()
{
	if (!_hitPoints)
	{
		std::cout << _name << ": \"HasNoHitPointsToRequestHighFives.\"\n";
		return ;
	}
	if (!_energyPoints)
	{
		std::cout << _name << ": \"HasNoEnergyPointsToRequestHighFives.\"\n";
		return ;
	}
	if (!std::cin)
	{
		std::cout << _name <<  ": \"HoNo!YouBrokeMyOnlyWayToGetHighFives.\"\n";
		return ;	
	}
	
	std::string		prompt;
	unsigned int	n = 0;
    std::cout << _name << ": \"HeyGuys!CanIGetHighFives?\"\n";
	std::getline(std::cin, prompt);
	for(unsigned int i = 0; prompt[i]; i++)
	{
		if(prompt[i] == '5')
			n++;
	}
	_energyPoints--;
	if (!n)
		std::cout << _name << ": \"SeemsLikeNoOneGaveMeHighFives...\"\n";
	else
		std::cout << _name << ": \"IGotToAdd " << n << " MoreHighFivesToMyCollectionOff " \
		<< _highFives << "\"\n";
	_highFives += n;
}