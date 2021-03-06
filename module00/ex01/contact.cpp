/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:24:10 by silim             #+#    #+#             */
/*   Updated: 2022/01/26 12:58:13 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(){
	m_first_name = "";
	m_last_name = "";
	m_nickname = "";
	m_phone_number = "";
	m_darkest_secret = "";
	m_created = false;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
	std::string phone_number, std::string darkest_secret){
	m_first_name = first_name;
	m_last_name = last_name;
	m_nickname = nickname;
	m_phone_number = phone_number;
	m_darkest_secret = darkest_secret;
	m_created = true;
};

std::string Contact::GetFirstName(){
	return m_first_name;
}

std::string Contact::GetLastName(){
	return m_last_name;
}

std::string Contact::GetNickName(){
	return m_nickname;
}

std::string Contact::GetPhoneNumber(){
	return m_phone_number;
}

std::string Contact::GetDarkestSecret(){
	return m_darkest_secret;
}


bool	Contact::GetCreated(){
	return m_created;
}
