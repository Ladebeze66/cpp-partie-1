/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgras-ca <fgras-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:55:10 by fgras-ca          #+#    #+#             */
/*   Updated: 2023/12/23 19:52:34 by fgras-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	AddContact();
		void	SearchContact() const;

	private:
		Contact	contacts[8];
		int		next_index;
		int		total_contacts;
};

#endif