#include <iostream>

int main(void)
{
	std::string str;
	std::string *stringPTR;
	std::string stringREF;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	stringREF = str;
	std::cout << "The memory address of str is: " << &str << std::endl;
	std::cout << "The memory address of stringPTR is: " << stringPTR << std::endl;
	std::cout << "The memory address of stringREF is: " << &stringREF << std::endl;
	std::cout << "The value of str is: " << str << std::endl;
	std::cout << "The value of stringPTR is: " << *stringPTR << std::endl;
	std::cout << "The value ofstringREF is: " << stringREF << std::endl;
}
