/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:30:56 by silim             #+#    #+#             */
/*   Updated: 2022/02/02 20:13:04 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream> // std::cout, std::cin
# include <string> // std::string
# include <stdint.h> // uint8_t, uint16_t, uint32_t, uint64_t

struct	Data
{
	int			grade;
	std::string	name;
};

#endif
