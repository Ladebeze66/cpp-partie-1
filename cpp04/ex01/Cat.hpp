/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:17:01 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 15:11:08 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain* brain;

	public:
		Cat();
		Cat(const Cat &copy);
		virtual Cat& operator=(const Cat &operator_aff);
		virtual ~Cat();

		void makeSound() const override;
		Brain* getBrain(void) const;
};

#endif
