#include<iostream>

class Fixed
{
	private:
		int					_num;
		static const int	_frac;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);
		Fixed & operator = (Fixed const &src);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};