#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : target("unnamed target") {}

RobotomyRequestForm::RobotomyRequestForm(string name) : target(name) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : target(cpy.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& cpy)
{
	this->target = cpy.target;
	return *this;
}

void	RobotomyRequestForm::getTarget()
{
	return this->target;
}
