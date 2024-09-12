/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:21:07 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/09/12 11:51:41 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
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

Form	create_form(const string name, bool isSigned, int sign_grade, int exec_grade)
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
}

int	main()
{
	Bureaucrat	b1 = create_bureaucrat("Marco", 12);
	Bureaucrat	b2 = create_bureaucrat("Alex", 1);
	//Bureaucrat	b2 = create_bureaucrat("Alex", 40);
	Form		f1 = create_form("MarcoForm", false, 100, 70);
	//Form		f1 = create_form("MarcoForm", false, 160, 70);
	Form		f2 = create_form("AlexForm", false, 34, 80);
	Form		f3;

	b1.signForm(f1);
	std::cout << b1 << std::endl;
	std::cout << f1 << std::endl;

	b2.signForm(f2);
	std::cout << b2 << std::endl;
	std::cout << f2 << std::endl;
	
	//b1.signForm(f1);
	f1 = f3;

	std::cout << f1 << std::endl;
	std::cout << f3 << std::endl;
	return 0;
}
