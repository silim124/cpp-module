/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:52:36 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 18:11:48 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main()
{
	Karen karen = Karen();

	karen.complain("debug");
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	karen.complain("NORMAL");
}
