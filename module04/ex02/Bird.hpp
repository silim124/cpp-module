/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bird.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:55:53 by silim             #+#    #+#             */
/*   Updated: 2022/02/01 00:29:27 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIRD_HPP
# define BIRD_HPP

#include "Animal.hpp"

class Bird : public Animal
{
	public:
		Bird();
		Bird(const Bird& bird);
		Bird& operator=(const Bird& bird);

		virtual void			makeSound() const;
		virtual void			printIdeas();
		virtual void			addIdea(std::string idea);
		virtual std::string		chooseIdea();

		virtual ~Bird();
};

#endif
