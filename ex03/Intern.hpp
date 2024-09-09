#ifndef INTERN_HPP
# define INTERN_HPP
# include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& cpy);
		~Intern();
		Intern&	operator=(const Intern& cpy);

		AForm*	makeForm(string name, string target);
};

#endif
