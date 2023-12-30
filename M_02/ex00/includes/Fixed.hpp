#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &newFixed);
		~Fixed();
		Fixed & operator=(const Fixed &other);
		int getRawBits(void)const;
		void setRawBits(int const raw);

	private:
		int	stock_value;
		static const int fraction_bits = 8;
};

#endif
