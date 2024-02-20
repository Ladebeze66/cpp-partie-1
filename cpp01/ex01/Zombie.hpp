/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 13:23:44 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/24 15:24:50 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setname(std::string name);

	private:
		std::string name;
		int	id;
		static int	count;
};

Zombie*	zombieHorde(int N, std::string name);

#endif