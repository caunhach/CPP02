/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:04:20 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/23 21:04:22 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include<iostream>
#include<cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_frac;
	public:
		Fixed();
		Fixed(int const i);
		Fixed(float const f);
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed & operator = (Fixed const &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif
