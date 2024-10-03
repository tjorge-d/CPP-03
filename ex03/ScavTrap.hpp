#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected :
		bool _guardGate;

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &a);
		~ScavTrap() ;

		bool	getGuardGate();
		void	setGuardGate(bool n);

		ScavTrap&	operator=(const ScavTrap &copy);

		void	attack(const std::string& target);
		void	guardGate();
};

#endif