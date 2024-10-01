#include "ClapTrap.hpp"

int main()
{
    ClapTrap    Ramiro("Ramiro");
	Ramiro.attack("Wall");
	std::cout << "\nPoor Ramiro, he is mad but has no strength to punch the Wall... Lets juice him up!\n";
	Ramiro.setAttackDamage(4);
	Ramiro.attack("Wall");
	std::cout << "\nPunching the wall is fun! But punching someone is even better!\n";
	
	ClapTrap	Someone;
	Ramiro.attack("Someone");
	Someone.takeDamage(Ramiro.getAttackDamage());

	std::cout << "\nLooks like Ramiro found himself a punching bag, WHAT A JOY!\n\n";
	for (int i = 6; i > 0; i--)
	{
		Ramiro.attack("Someone");
		Someone.takeDamage(Ramiro.getAttackDamage());
	}

	std::cout << "\n";
	Ramiro.beRepaired(2);
	Ramiro.beRepaired(2);
	Ramiro.attack("Someone");

	std::cout << "\n";
	Someone.attack("Ramiro");
	Someone.beRepaired(42);
	std::cout << "\nUnfortunately Someone has no life left in his heart to fight back...\n";
	std::cout << "\n--- Police Report ---\n\n";
	std::cout << "  Ramiro:\n      HP: " << Ramiro.getHitPoints() << "\n      EP: " \
	<< Ramiro.getEnergyPoints() << "\n      AD: " << Ramiro.getAttackDamage();
	std::cout << "\n\n  Someone:\n      HP: " << Someone.getHitPoints() << "\n      EP: " \
	<< Someone.getEnergyPoints() << "\n      AD: " << Someone.getAttackDamage();
	std::cout << "\n\n---------------------\n";
}