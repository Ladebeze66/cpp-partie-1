/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 16:58:01 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 16:58:40 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria* inventory[4];  // Inventaire avec 4 emplacements pour les Materias

	public:
		Character(std::string name);
		Character(const Character& other);
		Character& operator=(const Character& other);
		virtual ~Character();

		virtual std::string const & getName() const override;
		virtual void equip(AMateria* m) override;
		virtual void unequip(int idx) override;
		virtual void use(int idx, ICharacter& target) override;
};

#endif
