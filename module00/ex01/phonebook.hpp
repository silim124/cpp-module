/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:23:47 by silim             #+#    #+#             */
/*   Updated: 2022/01/26 00:21:49 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

#include <iostream>
#include <iomanip>
#include "contact.hpp"

class PhoneBook {
	private:
		Contact	m_contact[8];
		int		m_index;

	public:
		PhoneBook();
		void	AddContact();
		void	SearchContact();
		void	PrintHeader();
		void	PrintBody();
		void	PrintField(std::string str);
};

#endif
