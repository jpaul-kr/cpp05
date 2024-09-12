/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:21:07 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/09/12 12:12:13 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
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

int	main()
{
	AForm	*p = new PresidentialPardonForm("Joe Biden");
	AForm	*r = new RobotomyRequestForm("Bender");
	AForm	*s = new ShrubberyCreationForm("Christmas");
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
	//b2.executeForm(*r);
	b3.executeForm(*s);

	delete p;
	delete r;
	delete s;
}
