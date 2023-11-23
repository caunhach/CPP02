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