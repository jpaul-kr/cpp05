/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:51:15 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/09/12 12:05:56 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("unnamed"), grade(150) {}

Bureaucrat::Bureaucrat(const string n, int grad) : name(n) 
{
	if (grad > 150)
		throw Bureaucrat::GradeTooLowException(name + ", ");
	else if (grad < 1)
		throw Bureaucrat::GradeTooHighException(name + ", ");
	this->grade = grad;
}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy) : name(cpy.name), grade(cpy.grade) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& cpy)
{
	this->grade = cpy.grade;
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& cpy)
{
	os << cpy.getName() << ", bureaucrat grade " << cpy.getGrade();
	return os;
}

string	Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::incrementGrade() 
{
	if (this->grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException(name + ", ");
	this->grade--;
}

void	Bureaucrat::decrementGrade() 
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException(name + ", ");
	this->grade++;
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "\t" << this->name << " couldn't sign " << form.getName() << " because " \
			<< e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const AForm& form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "\texecution catch: " << e.what() << std::endl;
	}
}

Bureaucrat::GradeTooLowException::GradeTooLowException(string str) : std::out_of_range(str + "Grade Too Low") {}

Bureaucrat::GradeTooHighException::GradeTooHighException(string str) : std::out_of_range(str + "Grade Too High") {}
