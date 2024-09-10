#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& cpy)
{
	(void)cpy;
}

Intern::~Intern() {}

Intern&	Intern::operator=(const Intern& cpy)
{
	(void)cpy;
	return *this;
}

AForm*	Intern::makeShrubberyCreationForm(string target)
{
	AForm*	form = new ShrubberyCreationForm(target);
	std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
	return form;
}

AForm*	Intern::makeRobotomyRequestForm(string target)
{
	AForm*	form = new RobotomyRequestForm(target);
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return form;
}

AForm*	Intern::makePresidentialPardonForm(string target)
{
	AForm*	form = new PresidentialPardonForm(target);
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return form;
}

AForm*	Intern::makeForm(string name, string target) 
{
	createForm	form[3]  = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};
	string		names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int		i;

	try
	{
		for (i = 0; i < 3; i++)
		{
			if (!name.compare(names[i]))
				return (this->*form[i])(target);
		}
		if (i == 3)
			throw Intern::FormDoesntExistException(name);
	}
	catch (std::logic_error& e)
	{
		std::cout << "exception catch: " << e.what() << std::endl;
	}
	return NULL;
}

Intern::FormDoesntExistException::FormDoesntExistException(string str) : std::logic_error(str + " form doesn't exist") {}
