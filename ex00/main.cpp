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

void	modify_grade(int mode, Bureaucrat& p, int n)
{
	try
	{
		for (int i = 0; i < n; i++)
			mode == INCREMENT? p.incrementGrade() : p.decrementGrade();
	}
	catch (std::out_of_range& e)
	{
		std::cout << "catch: " << e.what() << std::endl;
	}
}

int	main()
{
	Bureaucrat	p1;
	Bureaucrat	p2("Marco", 12);
	Bureaucrat	p3("Alex", 1);

	modify_grade(INCREMENT, p2, 11);
	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;

	p1 = p3;
	modify_grade(DECREMENT, p1, 150);
	std::cout << p1 << std::endl;
	return 0;
}
