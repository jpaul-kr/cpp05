/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:28:36 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/21 11:55:29 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using	std::string;

class Bureaucrat
{
	public:
		Bureaucrat(const string name, int grade);
		Bureaucrat(const Bureaucrat& cpy);
		~Bureaucrat();

		operator=(const Bureaucrat& cpy);
		const string	getName();
		int		getGrade();
		void		incrementGrade();
		void		decrementGrade();

	private:
		const string	name;
		int		grade;
};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat& cpy);
