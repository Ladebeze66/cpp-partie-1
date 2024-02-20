/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 14:27:32 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/30 20:33:44 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap1("ClapTrap1");
	ClapTrap claptrap2("ClapTrap2");

	claptrap1.printStats();
	claptrap2.printStats();

	claptrap1.attack(claptrap2.getName());
	claptrap2.takeDamage(claptrap1.getAttackDamage());

	claptrap2.attack(claptrap1.getName());
	claptrap1.takeDamage(claptrap2.getAttackDamage());

	claptrap1.beRepaired(5);

	claptrap2.beRepaired(3);

	for (int i = 0; i < 3; i++)
	{
		claptrap1.attack(claptrap2.getName());
		claptrap2.takeDamage(claptrap1.getAttackDamage());

		claptrap2.attack(claptrap1.getName());
		claptrap1.takeDamage(claptrap2.getAttackDamage());
	}
	claptrap1.printStats();
	claptrap2.printStats();

	return (0);
}
