/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:57:52 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 00:09:39 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	this->HitPoints = FragTrap::HitPoints;  // Défini par FragTrap
	this->EnergyPoints = ScavTrap::EnergyPoints;  // Défini par ScavTrap
	this->AttackDamage = FragTrap::AttackDamage;  // Défini par FragTrap
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name +"_clap_trap"), ScavTrap(name), FragTrap (name), _name(name)
{
	this->HitPoints = FragTrap::HitPoints;  // Défini par FragTrap
	this->EnergyPoints = ScavTrap::EnergyPoints;  // Défini par ScavTrap
	this->AttackDamage = FragTrap::AttackDamage;  // Défini par FragTrap
	std::cout << GREEN << "DiamondTrap " << this->Name << " est créé." << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), FragTrap(copy), ScavTrap(copy)
{
	*this = copy;
	std::cout << CYAN << "Copy constructor called for DiamondTrap " << this->Name << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &operator_aff)
{
	if (this != &operator_aff)
	{
		this->Name = operator_aff.Name;
		this->HitPoints = operator_aff.HitPoints;
		this->EnergyPoints = operator_aff.EnergyPoints;
		this->AttackDamage = operator_aff.AttackDamage;
	}
	std::cout << MAGENTA << "Assignment operator called for FragTrap " << this->Name << RESET << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << RED <<"DiamondTrap " << this->Name << " est détruit." << RESET << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "Je suis " << this->Name << " et mon nom ClapTrap est " << ClapTrap::Name << "." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);  // Utilise l'attaque de ScavTrap
}
