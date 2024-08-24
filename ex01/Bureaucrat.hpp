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

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>

using	std::string;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const string name, int grade);
		Bureaucrat(const Bureaucrat& cpy);
		~Bureaucrat();

		Bureaucrat&	operator=(const Bureaucrat& cpy);
		string		getName() const;
		int		getGrade() const;
		void		incrementGrade();
		void		decrementGrade();

		class GradeTooLowException : public std::out_of_range
		{
			public:
				GradeTooLowException(string str);
		};

		class GradeTooHighException : public std::out_of_range
		{
			public:
				GradeTooHighException(string str);
		};

	private:
		const string	name;
		int		grade;
};

std::ostream&	operator<<(std::ostream &os, const Bureaucrat& cpy);

#endif
