/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:21:07 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/09/10 12:59:22 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#define INCREMENT 1
#define DECREMENT 0

Bureaucrat	create_bureaucrat(const string name, int grade)
{
	Bureaucrat	b(name, 150);
	try
	{
		b = Bureaucrat(name, grade);
	}
	catch(std::out_of_range& e)
	{
		std::cout << "Bureaucrat constructor catch: " << e.what() << std::endl;
	}
	return b;
}

/*Form	create_form(const string name, bool isSigned, int sign_grade, int exec_grade)
{
	Form	d(name, false, 150, 150);
	try
	{
		Form	f(name, isSigned, sign_grade, exec_grade);
		return f;
	}
	catch(std::out_of_range& e)
	{
		std::cout << "Form constructor catch: " << e.what() << std::endl;
	}
	return d;
}*/

int	main()
{
	Intern	intern;
	AForm	*p = intern.makeForm("presidential  pardon", "MarcoForm");
	AForm	*r = intern.makeForm("robotomy request", "JuanForm");
	AForm	*s = intern.makeForm("shrubbery creation", "GabrielForm");
	Bureaucrat	b1 = create_bureaucrat("Marco", 5);
	Bureaucrat	b2 = create_bureaucrat("Juan", 43);
	Bureaucrat	b3 = create_bureaucrat("Gabriel", 125);
	//Bureaucrat	b3 = create_bureaucrat("Gabriel", 146);

	std::cout << std::endl;
	b1.signForm(*p);
	b2.signForm(*r);
	b3.signForm(*s);
	//b1.signForm(*p);

	std::cout << std::endl;
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;

	std::cout << std::endl;
	b1.executeForm(*p);
	b2.executeForm(*r);
	b3.executeForm(*s);

	delete p;
	delete r;
	delete s;
}
/*int	main()
{
	Bureaucrat	p1 = create_bureaucrat("Marco", 12);
	Bureaucrat	p2 = create_bureaucrat("Alex", 1);
	//Bureaucrat	p2 = create_bureaucrat("Alex", 40);
	Form		f1 = create_form("Marco Form", false, 100, 70);
	//Form		f1 = create_form("Marco Form", false, 160, 70);
	Form		f2 = create_form("Alex Form", false, 34, 80);
	Form		f3;

	p1.signForm(f1);
	std::cout << p1 << std::endl;
	std::cout << f1 << std::endl;

	std::cout << p2 << std::endl;
	std::cout << f2 << std::endl;
	
	//p2.signForm(f2);
	//std::cout << f2 << std::endl;
	//p1.signForm(f1);
	f1 = f3;

	std::cout << f1 << std::endl;
	std::cout << f3 << std::endl;
	return 0;
}*/
