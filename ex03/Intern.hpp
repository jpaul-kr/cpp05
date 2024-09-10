#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& cpy);
		~Intern();
		Intern&	operator=(const Intern& cpy);

		AForm*	makeShrubberyCreationForm(string target);
		AForm*	makeRobotomyRequestForm(string target);
		AForm*	makePresidentialPardonForm(string target);
		AForm*	makeForm(string name, string target);

		class FormDoesntExistException : public std::logic_error
		{
			public:
				FormDoesntExistException(string str);
		};
};

typedef	AForm*	(Intern::*createForm)(string target);

#endif
