/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:21:07 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/21 13:22:03 by jpaul-kr         ###   ########.fr       */
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
	Form	f(name, false, 150, 150);
	try
	{
		f = Form(name, isSigned, sign_grade, exec_grade);
	}
	catch(std::out_of_range& e)
	{
		std::cout << "Form constructor catch: " << e.what() << std::endl;
	}
	return f;
}

int	main()
{
	Bureaucrat	p1 = create_bureaucrat("Marco", 12);
	Bureaucrat	p2 = create_bureaucrat("Alex", 1);
	Form		f1 = create_form("Marco Form", false, 100, 70);
	Form		f2 = create_form("Alex Form", false, 34, 80);
	Form		f3;

	p1.signForm(f1);
	std::cout << p1 << std::endl;
	std::cout << f1 << std::endl;

	std::cout << p2 << std::endl;
	std::cout << f2 << std::endl;

	//p1.signForm(f1);
	f1 = f3;

	std::cout << f1 << std::endl;
	std::cout << f3 << std::endl;
	return 0;
}
