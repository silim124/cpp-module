/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:56:40 by silim             #+#    #+#             */
/*   Updated: 2022/01/31 21:56:40 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:

	Ice();
	Ice(const Ice &ice);
	~Ice();

	Ice	&operator=(const Ice &ice);

	virtual AMateria	*clone() const ;
	virtual void		use(ICharacter& target);
};

#endif
