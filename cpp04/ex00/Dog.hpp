/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:06:42 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 12:16:31 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &copy);
		virtual Dog& operator=(const Dog &operator_aff);
		virtual ~Dog();

		void makeSound() const override;
};

#endif
