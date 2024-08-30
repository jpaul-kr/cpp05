#include "AForm.hpp"

AForm::AForm() : name("unnamed"), is_sign(false), sign_grade(150), exec_grade(150) {}

AForm::AForm(string _name, bool _is_sign, int _sign_grade, int _exec_grade) : name(_name), is_sign(_is_sign), sign_grade(_sign_grade), exec_grade(_exec_grade)
{
	try
	{
		if (_sign_grade > 150 || _exec_grade > 150)
			throw Form::GradeTooLowException(_name + ", ");
		else if (_sign_grade < 1 || _exec_grade < 1)
			throw Form::GradeTooHighException(_name + ", ");
	}
	catch (std::out_of_range& e)
	{
		std::cout << "\tForm constructor catch: " << e.what();
	}
}

AForm::AForm(const AForm& cpy) : name(cpy.name), is_sign(cpy.is_sign), sign_grade(cpy.sign_grade), exec_grade(cpy.exec_grade) {}

AForm::~AForm() {}

AForm&	AForm::operator=(const AForm& cpy)
{
	this->is_sign = cpy.is_sign;
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const AForm& cpy)
{
	os << "Form: " << cpy.getName() << ", is Signed: " << cpy.getIsSigned()\
		<< ", sign Grade: " << cpy.getSignGrade() << ", execute grade: " \
		<< cpy.getExecGrade() << std::endl;
	return os;
}

string	AForm::getName() const
{
	return this->name;
}

bool	AForm::getIsSigned() const
{
	return this->is_sign;
}

int	AForm::getSignGrade() const
{
	return this->sign_grade;
}

int	AForm::getExecGrade() const
{
	return this->exec_grade;
}

void	AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->is_sign)
		throw Form::FormAlreadySignedException("");
	this->sign_grade < bureaucrat.getGrade() ? throw Form::GradeTooLowException("") : this->is_sign = true;
}

AForm::GradeTooHighException::GradeTooHighException(string str) : std::out_of_range(str + "Grade Too High") {}

AForm::GradeTooLowException::GradeTooLowException(string str) : std::out_of_range(str + "Grade Too Low") {}

AForm::FormAlreadySignedException::FormAlreadySignedException(string str) : std::logic_error(str + "Is Already Signed") {}
