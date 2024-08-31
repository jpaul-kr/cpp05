#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : target("unnamed target") {}

PresidentialPardonForm::PresidentialPardonForm(string name) : target(name) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cpy) : target(cpy.target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& cpy)
{
	this->target = cpy.target;
	return *this;
}

string	PresidentialPardonForm::getTarget()
{
	return this->target;
}

void	PresidentialPardonForm::execPradon() {}
