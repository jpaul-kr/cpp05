#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& cpy) {}

Intern::~Intern() {}

Intern&	Intern::operator=(const Intern& cpy)
{
	(void)cpy;
	return *this;
}

AForm*	Intern::makeShrubberyCreationForm(string target)
{
	AForm*	form = new ShrubberyCreationForm(target);
	return form;
}

AForm*	Intern::makeRobotomyRequestForm(string target)
{
	AForm*	form = new RobotommyRequestForm(target);
	return form;
}

AForm*	Intern::makePresidentialPardonForm(string target)
{
	AForm*	form = new PresidentialPardonForm(target);
	return form;
}

AForm*	Intern::makeForm(string name, string target) 
{
	AForm*		ret;
	createForm	form[3]  = {&ShrubberyCrationForm, &RobotomyRequestForm, &PresidentialPardonForm};
	string		names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int		i;

	for (i = 0; i < 3; i++)
	{
		if (name == names[i])
			ret = form[i](target);
	}
	if (i == 3)
		throw Intern::FormDoesntExistException("exception catch: ");
	return ret;
}

Intern::FormDoesntExistException::FormDoesntExistException(string str) : std::logic_error(str + "Form doesn't exist") {}
