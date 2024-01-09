#include "../includes/Bureaucrat.hpp"

//forme coplienne

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor called\n";
	this->name = "default";
	this->grade = 75;
}

Bureaucrat::Bureaucrat(std::string newName, int newGrade)
{
	std::cout << "Constructor with both elements called\n";
	this->grade = newGrade;
	this->name = newName;
}

Bureaucrat::Bureaucrat(std::string newName)
{
	std::cout << "Constructor with only name called\n";
	this->name = newName;
	this->grade = 75;
}
Bureaucrat::Bureaucrat(int newGrade)
{
	std::cout << "Constructor with only grade called\n";
	this->name = "default";
	this->grade = newGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & cpy)
{
	std::cout << "Copy constructor called\n";
	*this = cpy;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & ope)
{
	std::cout << "Operator = construcor called\n";
	this->name = ope.getName();
	this->grade = ope.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->name << " destructor called\n";
}

//classe d'exception

const char *Bureaucrat::GradeTooHighException::what()const throw()
{
	return "Grade too HIGH";
}

const char *::Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

//getter

std::string Bureaucrat::getName(void)const
{
	return (this->name);
}

int Bureaucrat::getGrade(void)const
{
	return (this->grade);
}

//increment or decrement

void Bureaucrat::incrementGrade(void)
{
	int *ptr = &this->grade;
	if (this->getGrade() - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		*ptr -= 1;
}

void Bureaucrat::decrementGrade(void)
{
	int *ptr = &this->grade;
	if (this->getGrade() + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		*ptr = this->grade + 1;
}

std::ostream	&operator<<( std::ostream &o, const Bureaucrat &curr )
{
	o << curr.getName() << ", bureaucrat grade " << curr.getGrade() << '.' << std::endl;
	return o;
}
