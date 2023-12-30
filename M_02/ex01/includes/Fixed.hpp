#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <math.h>

class Fixed
{
	public:
		Fixed();
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &newFixed);
		~Fixed();
		Fixed & operator=(const Fixed &other);
		friend	std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
		int		toInt(void)const;

	private:
		int	stock_value;
		static const int fraction_bits = 8;
};

#endif
