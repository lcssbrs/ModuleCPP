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
		Fixed operator-(const Fixed &other)const;
		Fixed operator+(const Fixed &other)const;
		Fixed operator/(const Fixed &other)const;
		Fixed operator*(const Fixed &other)const;
		Fixed & operator++(void);
		Fixed & operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		friend	std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
		bool operator>(const Fixed &other)const;
		bool operator>=(const Fixed &other)const;
		bool operator<=(const Fixed &other)const;
		bool operator<(const Fixed &other)const;
		bool operator==(const Fixed &other)const;
		bool operator!=(const Fixed &other)const;
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
		int		toInt(void)const;

	private:
		int	stock_value;
		static const int fraction_bits = 8;
};

#endif
