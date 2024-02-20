/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 17:07:33 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 17:08:05 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <array>

class MateriaSource : public IMateriaSource
{
	private:
		std::array<AMateria*, 4> materias;  // Peut contenir jusqu'à 4 types de Materias

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		MateriaSource& operator=(const MateriaSource& other);
		virtual ~MateriaSource();

		virtual void learnMateria(AMateria* m) override;
		virtual AMateria* createMateria(std::string const & type) override;
};

#endif
