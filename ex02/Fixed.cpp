/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:04:13 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/23 21:04:15 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed:: _frac = 8;

Fixed::Fixed(): _value(0)
{
}

Fixed::Fixed(int const i)
{
	this->_value = i << Fixed::_frac;
}

Fixed::Fixed(float const f)
{
	this->_value = (int)roundf(f * (1 << Fixed::_frac));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
}

Fixed & Fixed::operator=(Fixed const &src)
{
	this->_value = src.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &src)const
{
	return (this->toFloat() > src.toFloat());
}

bool	Fixed::operator<(Fixed const &src)const
{
	return (this->toFloat() < src.toFloat());
}

bool	Fixed::operator>=(Fixed const &src)const
{
	return (this->toFloat() >= src.toFloat());
}

bool	Fixed::operator<=(Fixed const &src)const
{
	return (this->toFloat() <= src.toFloat());
}

bool	Fixed::operator==(Fixed const &src)const
{
	return (this->toFloat() == src.toFloat());
}

bool	Fixed::operator!=(Fixed const &src)const
{
	return (this->toFloat() != src.toFloat());
}

float	Fixed::operator+(Fixed const &src) const
{
	return (this->toFloat() + src.toFloat());
}

float	Fixed::operator-(Fixed const &src) const
{
	return (this->toFloat() - src.toFloat());
}

float	Fixed::operator*(Fixed const &src) const
{
	return (this->toFloat() * src.toFloat());
}

float	Fixed::operator/(Fixed const &src) const
{
	return (this->toFloat() / src.toFloat());
}

Fixed	Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_value++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_value--;
	return (tmp);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_frac);
}

float	Fixed::toFloat(void) const
{

	return this->getRawBits() / (float)(1 << Fixed::_frac);
}

Fixed	&Fixed::min(Fixed &s1, Fixed &s2)
{
	if (s1.toFloat() <= s2.toFloat())
		return (s1);
	else
		return (s2);
}

const Fixed	&Fixed::min(const Fixed &s1, const Fixed &s2)
{
	if (s1.toFloat() <= s2.toFloat())
		return (s1);
	else
		return (s2);
}

Fixed	&Fixed::max(Fixed &s1, Fixed &s2)
{
	if (s1.toFloat() >= s2.toFloat())
		return (s1);
	else
		return (s2);
}

const Fixed	&Fixed::max(const Fixed &s1, const Fixed &s2)
{
	if (s1.toFloat() >= s2.toFloat())
		return (s1);
	else
		return (s2);
}

std::ostream &operator<<(std::ostream & o, Fixed const & src)
{
	o << src.toFloat();
	return o;
}
