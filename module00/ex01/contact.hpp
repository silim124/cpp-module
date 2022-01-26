/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:24:07 by silim             #+#    #+#             */
/*   Updated: 2022/01/26 12:57:32 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
# define __CONTACT_H__

#include <string>

class Contact {
	private:
		std::string m_first_name, m_last_name, m_nickname, m_phone_number, m_darkest_secret;
		bool	m_created;

	public:
		Contact();
		Contact(std::string first_name, std::string last_name, std::string nickname,
				std::string phone_number, std::string darkest_secret);
		std::string	GetFirstName();
		std::string	GetLastName();
		std::string	GetNickName();
		std::string	GetPhoneNumber();
		std::string	GetDarkestSecret();
		bool		GetCreated();
};

#endif
