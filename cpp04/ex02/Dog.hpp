/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 12:06:42 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/31 16:20:45 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public AAnimal
{
	private:
		Brain* brain;

	public:
		Dog();
		Dog(const Dog &copy);
		virtual Dog& operator=(const Dog &operator_aff);
		virtual ~Dog();

		void makeSound() const override;
		Brain* getBrain(void) const;
};

#endif
