/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:55:19 by silim             #+#    #+#             */
/*   Updated: 2022/02/01 02:52:50 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;

	public:
		Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);

		virtual void				makeSound() const;
		virtual void				printIdeas();
		virtual void				addIdea(std::string idea);
		virtual std::string			chooseIdea();

		virtual ~Cat();
};

#endif
