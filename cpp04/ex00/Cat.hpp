/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:17:01 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 12:18:06 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &copy);
		virtual Cat& operator=(const Cat &operator_aff);
		virtual ~Cat();

		void makeSound() const override;
};

#endif
