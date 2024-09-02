#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target("unnamed target") {}

ShrubberyCreationForm::ShrubberyCreationForm(string name) : target(name) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy) : target(cpy.target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& cpy)
{
	AForm::operator=(cpy);
	return *this;
}

string	ShrubberyCreationForm::getTarget() const
{
	return this->target;
}

void	ShrubberyCreationForm::executeShrubbery()
{
	string	target = this->target + "_shrubbery";
	std::ofstream	os(target.c_str());

	os << "    *\n" << "   ***\n" << "  *****\n" << " *******\n"\
		<< "*********\n" << "   |||   " << std::endl;
		
}
