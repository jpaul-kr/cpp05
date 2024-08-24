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
		std::cout << "constructor catch: " << e.what() << std::endl;
	}
	return b;
}

void	modify_grade(int mode, Bureaucrat& p, int n)
{
	try
	{
		for (int i = 0; i < n; i++)
			mode == INCREMENT? p.incrementGrade() : p.decrementGrade();
	}
	catch (std::out_of_range& e)
	{
		std::cout << "modify catch: " << e.what() << std::endl;
	}
}

int	main()
{
	Bureaucrat	p1;
	Bureaucrat	p2 = create_bureaucrat("Marco", 12);
	Bureaucrat	p3 = create_bureaucrat("Alex", 1);
	//Bureaucrat	p2 = create_bureaucrat("Marco", 0);
	//Bureaucrat	p3 = create_bureaucrat("Alex", 151);

	//modify_grade(INCREMENT, p2, 11);
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;

	p1 = p3;
	//modify_grade(DECREMENT, p1, 150);
	std::cout << p1 << std::endl;
	return 0;
}
