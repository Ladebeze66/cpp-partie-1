/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:16:10 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/24 17:24:34 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const	std::string &Weapon::getType(void)
{
	const	std::string &type = this->_type;
	return (type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(void) {}