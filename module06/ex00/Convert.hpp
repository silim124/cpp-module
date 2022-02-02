/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:30:28 by silim             #+#    #+#             */
/*   Updated: 2022/02/02 17:30:50 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>
# include <cmath>
# include <limits>

class Convert
{
private:
	std::string	_input;

	bool	checkType(std::string str);
public:
	Convert();
	Convert(std::string str);
	Convert(const Convert& convert);
	Convert& operator=(const Convert& convert);

	char	toChar( void ) const;
	float	toFloat( void ) const;
	int		toInt( void ) const;
	double	toDouble( void ) const;

	void	printAll( void );
	void	printChar( void );
	void	printInt( void );
	void	printFloat( void );
	void	printDouble( void );

	class WrongInput: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	~Convert();
};

#endif
