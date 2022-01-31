/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:56:33 by silim             #+#    #+#             */
/*   Updated: 2022/01/31 21:56:34 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria {
	public:
		Cure();
		Cure(const Cure &cure);
		Cure& operator=(const Cure &cure);

		virtual AMateria* clone() const;
		virtual void use(ICharacter &target);

		~Cure();
};

#endif
