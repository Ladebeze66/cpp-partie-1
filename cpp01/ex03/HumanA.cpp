/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:25:06 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/24 17:47:18 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {}

void	HumanA::attack(void)
{
	const	std::string type = this->_weapon.getType();
	std::cout << this->_name << " attack with their " << type << std::endl;
}

HumanA::~HumanA(void) {}