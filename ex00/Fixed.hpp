/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caunhach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:03:32 by caunhach          #+#    #+#             */
/*   Updated: 2023/11/23 21:03:35 by caunhach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_num;
		static const int	_frac;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed 	&operator = (Fixed const &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
