/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:54:50 by silim             #+#    #+#             */
/*   Updated: 2022/01/31 21:54:51 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& wrong_animal);
		WrongAnimal&	operator=(WrongAnimal const &wrong_animal);

		void	makeSound() const;
		std::string		getType() const;

		~WrongAnimal();
};

#endif
