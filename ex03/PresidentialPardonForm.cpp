#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", false, P_SGRADE, P_EGRADE), target("unnamed target") {}

PresidentialPardonForm::PresidentialPardonForm(string name) : AForm("PresidentialPardonForm", false, P_SGRADE, P_EGRADE), target(name) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cpy) : AForm("PresidentialPardonForm", false, P_SGRADE, P_EGRADE), target(cpy.target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& cpy)
{
	AForm::operator=(cpy);
	return *this;
}

string	PresidentialPardonForm::getTarget() const
{
	return this->target;
}

void	PresidentialPardonForm::executeForm() const
{
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
