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

#include <iostream>
#include <string>
#include <cmath>

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

		Fixed & operator=(Fixed const &src);
		bool	operator>(Fixed const &src)const;
		bool	operator>=(Fixed const &src)const;
		bool	operator<(Fixed const &src)const;
		bool	operator<=(Fixed const &src)const;
		bool	operator==(Fixed const &src)const;
		bool	operator!=(Fixed const &src)const;

		float	operator+(Fixed const &src)const;
		float	operator-(Fixed const &src)const;
		float	operator*(Fixed const &src)const;
		float	operator/(Fixed const &src)const;

		Fixed	operator++();
		Fixed	operator--();

		Fixed	operator++(int);
		Fixed	operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static	Fixed &min(Fixed &s1, Fixed &s2);
		static	const Fixed &min(Fixed const &s1, Fixed const &s2);
		static	Fixed &max(Fixed &s1, Fixed &s2);
		static	const Fixed &max(Fixed const &s1, Fixed const &s2);
};

std::ostream &operator<<(std::ostream & o, Fixed const & src);

#endif
