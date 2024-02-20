/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 14:06:58 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 16:30:23 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	// Initialisation des idées
	for (int i = 0; i < 100; ++i)
	{
		ideas[i] = "Idea " + std::to_string(i);
		//std::cout << GREEN << "Initialising Brain Idea #" << i << ": " << ideas[i] << RESET << std::endl;
	}
	std::cout << GREEN << "Brain constructed with 100 ideas." << RESET << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << CYAN << "Brain copy constructor called." << RESET << std::endl;
}

Brain& Brain::operator=(const Brain &operator_aff)
{
	std::cout << MAGENTA << "Brain assignment operator called." << RESET << std::endl;
	if (this != &operator_aff)
	{
		for (int i = 0; i < 100; ++i)
		{
			this->ideas[i] = operator_aff.ideas[i];
			//std::cout << "Copying Idea #" << i << ": " << this->ideas[i] << std::endl;
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << RED << "Brain destructor called" << RESET << std::endl;
}

void Brain::setIdea(std::string idea, int i)
{
	this->ideas[i]=idea;
}

std::string Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}
