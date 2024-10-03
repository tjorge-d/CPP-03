#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &a);
		~DiamondTrap();

		DiamondTrap&	operator=(const DiamondTrap &copy);

		void whoAmI();
	
	private:
		std::string	_name;
};

#endif