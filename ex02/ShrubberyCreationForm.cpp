#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", false, S_SGRADE, S_EGRADE), target("unnamed target") {}

ShrubberyCreationForm::ShrubberyCreationForm(string name) : AForm("ShrubberyCreationForm", false, S_SGRADE, S_EGRADE), target(name) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy) : AForm("ShrubberyCreationForm", false, S_SGRADE, S_EGRADE), target(cpy.target) {}

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

void	ShrubberyCreationForm::executeForm()
{
	string	target = this->target + "_shrubbery";
	std::ofstream	os(target.c_str());

	os << "    *\n" << "   ***\n" << "  *****\n" << " *******\n"\
		<< "*********\n" << "   |||   " << std::endl;
		
}
