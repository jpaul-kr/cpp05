#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : target("unnamed target") {}

ShrubberyCreationForm::ShrubberyCreationForm(string name) : target(name) {}

ShrubberyCreationAForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy) : target(cpy.target) {}

ShrubberyCreationAForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& cpy)
{
	this->target = cpy.target;
	return *this;
}

string	ShrubberyCreationForm::getTarget() const
{
	return this->target;
}

void	ShrubberyCreationForm::executeShrubbery()
{
}
