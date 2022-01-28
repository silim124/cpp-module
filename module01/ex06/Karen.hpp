/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:42:06 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 18:11:02 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Karen{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Karen(){};
		void complain(std::string level);
		~Karen(){};
};


