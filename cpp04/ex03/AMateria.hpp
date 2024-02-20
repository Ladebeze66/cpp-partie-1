/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:44:47 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 17:09:18 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(std::string const & type);
		virtual ~AMateria();

		std::string const & getType() const;  // Renvoie le type de la materia
		virtual AMateria* clone() const = 0;  // Doit être implémenté dans les sous-classes
		virtual void use(ICharacter& target);  // Peut être redéfini dans les sous-classes
};

#endif
