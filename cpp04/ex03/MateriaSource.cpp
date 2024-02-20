/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:08:37 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 17:11:59 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	materias.fill(nullptr);
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete materias[i];
			materias[i] = other.materias[i] ? other.materias[i]->clone() : nullptr;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (auto& materia : materias)
	{
		delete materia;
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (auto& materia : materias)
	{
		if (!materia)
		{
			materia = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (auto& materia : materias)
	{
		if (materia && materia->getType() == type)
		{
			return materia->clone();
		}
	}
	return (nullptr);
}
