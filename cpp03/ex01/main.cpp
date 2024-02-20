/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 15:59:39 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/30 20:40:16 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap claptrap1("Clappy");
	ScavTrap scavtrap1("Serena");

	claptrap1.printStats();
	scavtrap1.printStats();

	std::cout << "\n--- Tests ClapTrap ---" << std::endl;
	claptrap1.attack("un ennemi");
	claptrap1.takeDamage(3);
	claptrap1.beRepaired(2);

	std::cout << "\n--- Tests ScavTrap ---" << std::endl;
	scavtrap1.attack("un autre ennemi");
	scavtrap1.takeDamage(15);
	scavtrap1.beRepaired(10);
	scavtrap1.guardGate();

	std::cout << "\n--- Tests avancés : Interactions entre ClapTrap et ScavTrap ---" << std::endl;
	claptrap1.attack(scavtrap1.getName());
	scavtrap1.takeDamage(claptrap1.getAttackDamage());

	scavtrap1.attack(claptrap1.getName());
	claptrap1.takeDamage(scavtrap1.getAttackDamage());

	std::cout << "\n--- Tests des limites ---" << std::endl;
	while (scavtrap1.getEnergyPoints() > 0)
	{
		scavtrap1.attack(claptrap1.getName());
		claptrap1.takeDamage(scavtrap1.getAttackDamage());
    }

	std::cout << "\n--- ScavTrap essaie d'attaquer sans points d'énergie ---" << std::endl;
	scavtrap1.attack(claptrap1.getName());

	std::cout << "\n--- ClapTrap essaie de se réparer avec des points de vie au maximum ---" << std::endl;
	claptrap1.beRepaired(1);

	claptrap1.printStats();
	scavtrap1.printStats();

	return (0);
}
