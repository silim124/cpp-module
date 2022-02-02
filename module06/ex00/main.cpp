/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:30:31 by silim             #+#    #+#             */
/*   Updated: 2022/02/02 20:14:37 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "잘못된 형식입니다!" << std::endl;
		return 1;
	}
	try
	{
		Convert num(argv[1]); // 입력값을 인자로 받아 Convert 객체를 생성한다.
		num.printAll(); // 전체 출력
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
