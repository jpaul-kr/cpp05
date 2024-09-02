#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : target("unnamed target") {}

RobotomyRequestForm::RobotomyRequestForm(string name) : target(name) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : target(cpy.target) {}

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

void	RobotomyRequestForm::executeRobotomy()
{
	int	r = rand() % 2;
	std::cout << "Bzz...Bzzzzzzz(drilling noises)" << std::endl;

	std::cout << r << std::endl;

	if (r)
		std::cout << this->target << " has been successfully robotomized!" << std::endl;
	else
		std::cout << this->target << " has failed to be robotomized" << std::endl;
}
