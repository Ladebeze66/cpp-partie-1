/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:27:47 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/30 23:48:31 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	// Création des instances
	ClapTrap claptrap_default;
	//ScavTrap scavtrap_default;
	//FragTrap fragtrap_dafault;
	DiamondTrap diamondtrap_default;

	ClapTrap claptrap("Clappy");
	//ScavTrap scavtrap("Serena");
	//FragTrap fragtrap("Fraggy");
	DiamondTrap diamondtrap("Diamy");

	diamondtrap_default = diamondtrap;

	claptrap.printStats();
	//scavtrap.printStats();
	//fragtrap.printStats();
	diamondtrap.printStats();

	// Tests basiques pour ClapTrap
	std::cout << "\n--- Tests ClapTrap ---" << std::endl;
	claptrap.attack("un ennemi");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);

	// Tests basiques pour ScavTrap
	//std::cout << "\n--- Tests ScavTrap ---" << std::endl;
	//scavtrap.attack("un autre ennemi");
	//scavtrap.takeDamage(15);
	//scavtrap.beRepaired(10);
	//scavtrap.guardGate();

	// Tests basiques pour FragTrap
	//std::cout << "\n--- Tests FragTrap ---" << std::endl;
	//fragtrap.attack("un ennemi lointain");
	//fragtrap.takeDamage(20);
	//fragtrap.beRepaired(15);
	//fragtrap.highFivesGuys();

	// Tests spécifiques pour DiamondTrap
	std::cout << "\n--- Tests DiamondTrap ---" << std::endl;
	diamondtrap.attack("un ennemi mystérieux");  // Doit utiliser l'attaque de ScavTrap
	diamondtrap.takeDamage(40);
	diamondtrap.beRepaired(30);
	diamondtrap.guardGate();  // Doit utiliser la capacité de ScavTrap
	diamondtrap.highFivesGuys();  // Doit utiliser la capacité de FragTrap
	diamondtrap.whoAmI();  // Affiche les noms DiamondTrap et ClapTrap

	// Tests des limites de DiamondTrap
	std::cout << "\n--- Tests des limites de DiamondTrap ---" << std::endl;
	while (diamondtrap.getEnergyPoints() > 0)
	{
		diamondtrap.attack("un ennemi lointain");
	}
	std::cout << "DiamondTrap essaie d'attaquer sans points d'énergie." << std::endl;
	diamondtrap.attack("un ennemi lointain");

	claptrap.printStats();
	//scavtrap.printStats();
	//fragtrap.printStats();
	diamondtrap.printStats();

	diamondtrap.whoAmI();

	DiamondTrap	dt("Test");
	DiamondTrap	dtt;

	dt.whoAmI();
	dtt = dt;
	dtt.highFivesGuys();

	return (0);
}
