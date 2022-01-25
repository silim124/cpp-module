/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:23:50 by silim             #+#    #+#             */
/*   Updated: 2022/01/25 23:30:28 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(){
	m_index = 0;
};

void PhoneBook::AddContact(){
	std::string first_name, last_name, nickname, phone_number, darkest_secret;
	std::cout << "이름을 입력하세요: " << std::endl;
	getline(std::cin, first_name);
	std::cout << "성을 입력하세요: " << std::endl;
	getline(std::cin, last_name);
	std::cout << "별명을 입력하세요: " << std::endl;
	getline(std::cin, nickname);
	std::cout << "핸드폰 번호를 입력하세요: " << std::endl;
	getline(std::cin, phone_number);
	std::cout << "가장 어두운 비밀을 입력하세요: " << std::endl;
	getline(std::cin, darkest_secret);
	m_contact[m_index % 8] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	++m_index;
};

void	PhoneBook::PrintHeader(){
	std::cout << "|" << std::setw(10) << "index";
	std::cout << "|" << std::setw(10) << "first_name";
	std::cout << "|" << std::setw(10) << "last_name";
	std::cout << "|" << std::setw(10) << "nickname" << std::endl;
};

void	PhoneBook::PrintBody(){
	for (int i = 0; i < 8; i++){
		std::cout << "|" << std::setw(10) << i + 1;
		PrintField(m_contact[i].GetFirstName());
		PrintField(m_contact[i].GetLastName());
		PrintField(m_contact[i].GetNickName());
		std::cout << std::endl;
	}
};

void	PhoneBook::PrintField(std::string str){
	std::cout << "|";
	(str.length() < 10)? std::cout << std::setw(10) << str : std::cout << str.substr(0,9) << '.';
};

void	PhoneBook::SearchContact(){
	int	index;

	PrintHeader();
	PrintBody();
	while (42){
		std::cout << "찾는 연락처의 인덱스를 입력하세요: (0: 종료)" << std::endl;
		std::cin >> index;
		if (index == 0)
			return ;
		if (std::cin.fail()){
			std::cout << "잘못된 인덱스 값입니다." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}
		if (index > 8 || index < 0){
			std::cout << "잘못된 인덱스 값입니다." << std::endl;
			continue;
		}
		--index;
		std::cout << "first name: " << m_contact[index].GetFirstName() << std::endl;
		std::cout << "last name: " << m_contact[index].GetLastName() << std::endl;
		std::cout << "nickname: " << m_contact[index].GetNickName() << std::endl;
		std::cout << "phone number: " << m_contact[index].GetPhoneNumber() << std::endl;
		std::cout << "darkest secret: " << m_contact[index].GetDarkestSecret() << std::endl;
	}
};
