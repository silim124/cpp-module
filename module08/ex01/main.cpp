/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:02:04 by silim             #+#    #+#             */
/*   Updated: 2022/02/03 18:02:37 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << "=== Test Default ===" << std::endl;
	{
	Span sp = Span(5); // 5개의 원소를 가진 Span 생성

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << "=== Test big===" << std::endl;
	{
	Span sp = Span(10000); // 10000개의 원소를 가진 Span 생성
	sp.RandomInit(); // 임의의 수로 초기화

	std::cout << "sp: " << &sp << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2(sp);
	std::cout << "sp2: " << &sp2 << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	Span sp3;
	sp3 = sp;
	std::cout << "sp3: " << &sp3 << std::endl;
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	}

	return 0;
}
