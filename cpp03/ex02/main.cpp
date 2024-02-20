/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:59:39 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/30 21:15:23 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap claptrap("Clappy");
	ScavTrap scavtrap("Serena");
	FragTrap fragtrap("Fraggy");

	claptrap.printStats();
	scavtrap.printStats();
	fragtrap.printStats();

	std::cout << "\n--- Tests ClapTrap ---" << std::endl;
	claptrap.attack("un ennemi");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);

	std::cout << "\n--- Tests ScavTrap ---" << std::endl;
	scavtrap.attack("un autre ennemi");
	scavtrap.takeDamage(15);
	scavtrap.beRepaired(10);
	scavtrap.guardGate();

	std::cout << "\n--- Tests FragTrap ---" << std::endl;
	fragtrap.attack("un ennemi lointain");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(15);
	fragtrap.highFivesGuys();

	std::cout << "\n--- Tests avancés : Interactions entre différents types de Traps ---" << std::endl;
	scavtrap.attack(fragtrap.getName());
	fragtrap.takeDamage(scavtrap.getAttackDamage());

	fragtrap.attack(scavtrap.getName());
	scavtrap.takeDamage(fragtrap.getAttackDamage());

	std::cout << "\n--- Tests des limites de ClapTrap ---" << std::endl;
	while (claptrap.getEnergyPoints() > 0)
	{
		claptrap.attack(fragtrap.getName());
		fragtrap.takeDamage(claptrap.getAttackDamage());
	}
	claptrap.attack(fragtrap.getName());

	std::cout << "\n--- Tester les limites de ScavTrap et FragTrap ---" << std::endl;
	scavtrap.takeDamage(100);
	fragtrap.takeDamage(150);

	claptrap.printStats();
	scavtrap.printStats();
	fragtrap.printStats();

	return (0);
}
