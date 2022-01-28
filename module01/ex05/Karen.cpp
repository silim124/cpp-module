/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:09:19 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 18:09:20 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void Karen::debug(void){
	std::cout << "[ DEBUG ] ";;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
};

void Karen::info(void){
	std::cout << "[ INFO ] ";;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
};

void Karen::warning(void){
	std::cout << "[ WARNING ] ";;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
};
void Karen::error(void){
	std::cout << "[ ERROR ] ";;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
};

void Karen::complain(std::string level){
	void (Karen::*complains[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int index = std::find(levels, levels+4, level) - levels;
	(index < 4) ? (this->*complains[index])(): (void)0;
};
