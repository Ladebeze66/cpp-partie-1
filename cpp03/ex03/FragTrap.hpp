/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 16:19:16 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/30 23:02:55 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
	FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap & operator = (const FragTrap &operator_aff);
		~FragTrap();

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif
