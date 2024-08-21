/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:51:15 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/21 12:06:44 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const string n, int grad) : name(n), grade(grad) {}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy)
{
	this->name = cpy.name;
	this->grade = cpy.grade;
}

Bureaucrat::~Burreaucrat() {}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& cpy)
{
	this->name = cpy.name;
	this->grade = cpy.grade;
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& cpy)
{
	os << cpy.name << ", bureaucrat grade " << cpy.grade << std::endl;
	return os;
}

const string	Bureaucrat::getName()
{
	return this->name;
}

const string	Bureaucrat::getGrade()
{
	return this->grade;
}

void	Bureaucrat::incrementGrade() {}

void	Bureaucrat::decrementGrade() {}
