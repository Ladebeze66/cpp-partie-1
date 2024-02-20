/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:52:43 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 17:25:11 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}

		virtual std::string const & getName() const = 0; // Doit retourner le nom du personnage
		virtual void equip(AMateria* m) = 0; // Équipe une AMateria
		virtual void unequip(int idx) = 0; // Déséquipe une AMateria sans la détruire
		virtual void use(int idx, ICharacter& target) = 0; // Utilise une AMateria sur un ICharacter
};

#endif
