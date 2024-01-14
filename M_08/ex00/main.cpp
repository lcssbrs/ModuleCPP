#include "easyfind.hpp"


int main (void)
{
	std::list<int> li;
	int i = 0;
	while (i < 10)
	{
		li.push_front(i + 25);
		li.push_front(i + 10);
		li.push_front(i + 2);
		i++;
	}
	int second = 989898;
	try
	{
		easyfind(li, second);
	}
	catch (NotFindException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}
