#include <iostream>
#include <fstream>
#include <string>

std::string	readfile(char *filename)
{
	std::ifstream myfile (filename);
	std::string line;
	std::string	allfile;
	if (myfile.is_open())
	{
		while (myfile)
		{
			std::getline(myfile, line);
			allfile += line;
			allfile += '\n';
		}
	}
	else if (!myfile.is_open())
	{
		std::cout << "Please enter a valid file" << std::endl;
		line.clear();
		return (line);
	}
	allfile.erase(allfile.size() - 1);
	return(allfile);
}

std::string	replaceSubstring(std::string &file, std::string &s1, std::string &s2)
{
	int len;

	len = file.find(s1, 0);
	while (len != -1)
	{
		file.erase(len, s1.size());
		file.insert(len, s2);
		len = file.find(s1, 0);
	}
	return (file);
}

int main(int ac, char **ag)
{

	if (ac != 4)
	{
		std::cout << "Put a file then a substring then a replace substring" << std::endl;
		return (1);
	}
	std::string file;
	std::string finalstr;
	std::string firstSubstring = ag[2];
	std::string secondSubstring = ag[3];
	file = readfile(ag[1]);
	if (file.empty())
		return (1);
	finalstr = replaceSubstring(file, firstSubstring, secondSubstring);
	std::cout << file;
	return (0);
}
