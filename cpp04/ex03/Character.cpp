/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:58:59 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 17:28:36 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name) : name(name)
{
	for (int i = 0; i < 4; ++i)
	{
		inventory[i] = nullptr;
	}
}

Character::Character(const Character& other)
{
	*this = other;
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; ++i)
		{
			delete inventory[i];  // Assurez-vous de libérer la mémoire de l'inventaire actuel
			inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : nullptr;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		delete inventory[i];
	}
}

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		inventory[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
	{
		inventory[idx]->use(target);
	}
}
