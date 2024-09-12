#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", false, R_SGRADE, R_EGRADE), target("unnamed target") {}

RobotomyRequestForm::RobotomyRequestForm(string name) : AForm("RobotomyRequestForm", false, R_SGRADE, R_EGRADE), target(name) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : AForm("RobotomyRequestForm", false, R_SGRADE, R_EGRADE), target(cpy.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& cpy)
{
	AForm::operator=(cpy);
	return *this;
}

string	RobotomyRequestForm::getTarget() const
{
	return this->target;
}

void	RobotomyRequestForm::executeForm() const
{
	int	r = rand() % 2;

	std::cout << "Bzz...Bzzzzzzz(drilling noises)" << std::endl;

	if (r)
		std::cout << this->target << " has been successfully robotomized!" << std::endl;
	else
		std::cout << this->target << " has failed to be robotomized" << std::endl;
}
