#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected :
		unsigned int _highFives;

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &a);
		~FragTrap() ;

		int	getHighFives();

		FragTrap&	operator=(const FragTrap &copy);

		void	highFivesGuy();
};

#endif