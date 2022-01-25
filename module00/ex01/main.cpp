/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:24:04 by silim             #+#    #+#             */
/*   Updated: 2022/01/25 05:34:12 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int	main(){
	std::string cmd;
	PhoneBook phonebook;

	while (42){
		std::cout << "원하는 커맨드를 입력하세요: (ADD/SEARCH/EXIT)";
		std::cin >> cmd;
		std::cin.ignore();

		if (cmd == "ADD")
			phonebook.AddContact();
		else if (cmd == "SEARCH")
			phonebook.SearchContact();
		else if (cmd == "EXIT")
			return (0);
		else
			continue;
	}
	return (0);
}
