/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 21:04:08 by silim             #+#    #+#             */
/*   Updated: 2022/02/01 23:15:54 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Bureaucrat	a("a", 100);
		std::cout << a << std::endl;

		Form		b("b 문서", 200, 150);
		std::cout << b << std::endl;

	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	a("a", 100);
		std::cout << a << std::endl;

		Form		b("b 문서", 50, 0);
		std::cout << b << std::endl;

	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	a("a", 100);
		std::cout << a << std::endl;

		Form		b("b 문서", 50, 120);
		std::cout << b << std::endl;

		a.signForm(b);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat	a("a", 100);
		std::cout << a << std::endl;

		Form		b("b 문서", 50, 80);
		std::cout << b << std::endl;

		a.signForm(b);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
