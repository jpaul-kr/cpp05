#include "Form.hpp"

Form::Form() : name("unnamed"), is_sign(false), sign_grade(150), exec_grade(150) {}

Form::Form(string _name, bool _is_sign, int _sign_grade, int _exec_grade) : name(_name), is_sign(_is_sign)
{
	try
	{
		if (_sign_grade > 150 || _exec_grade > 150)
			throw Form::GradeTooLowException(_name + ", ");
		else if (_sign_grade < 1 || _exec_grade < 1)
			throw Form::GradeTooHighException(_name + ", ");
		else
		{
			sign_grade = _sign_grade;
			exec_grade = _exec_grade;
		}
	}
	catch (std::out_of_range& e)
	{
		std::cout << "Form constructor catch: " << e.what();
	}
}

Form::Form(const Form& cpy) : name(cpy.name), is_sign(cpy.is_sign), sign_grade(cpy.sign_grade), exec_grade(cpy.exec_grade) {}

Form::~Form() {}

Form&	Form::operator=(const Form& cpy)
{
	this->is_sign = cpy.is_sign;
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Form& cpy)
{
	os << "Form: " << cpy.getName() << ", is Signed: " << cpy.getisSigned()\
		<< ", sign Grade: " << cpy.getSignGrade() << ", execute grade: " \
		<<cpy.getExecGrade() << std::endl;
}

string	Form::getName()
{
	return this->name;
}

bool	Form::getIsSigned()
{
	return this->is_sign;
}

int	Form::getSignGrade()
{
	return this->sign_grade;
}

int	Form::getExecGrade()
{
	return this->exec_grade;
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->is_sign)
		throw Form::FormAlreadySignedException(this->name + ", ");
	this->sign_grade < bureaucrat.grade ? throw Form::GradeTooLowException(this->name + ", ") : this->is_sign = true;
}

Form::GradeTooHighException::GradeTooHighException(string str) : std::out_of_range(str + "Grade Too High") {}

Form::GradeTooLowException::GradeTooLowException(string str) : std::out_of_range(str + "Grade Too Low") {}

Form::FormAlreadySignedException::FormAlreadySignedException(string str) : std::logic_error(str + "Is Already Signed") {}
