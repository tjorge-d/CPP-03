#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap	Joaozinho("Joaozinho");
	std::cout << "----- " << Joaozinho.getName() << " -----\n\n";
	std::cout << "	Attack: ";
	Joaozinho.attack("Monitor");
	std::cout << "\n	Take damage: ";
	Joaozinho.takeDamage(2);
	std::cout << "\n	Be repaired: ";
	Joaozinho.beRepaired(1);
	std::cout << "\n	3 HighFives request:\n";
	Joaozinho.highFivesGuy();
	Joaozinho.highFivesGuy();
	Joaozinho.highFivesGuy();
	std::cout << "\n	Hit Points: " << Joaozinho.getHitPoints();
	std::cout << "\n	Energy Points: " << Joaozinho.getEnergyPoints();
	std::cout << "\n	HighFives: " << Joaozinho.getHighFives() << "\n\n";
}