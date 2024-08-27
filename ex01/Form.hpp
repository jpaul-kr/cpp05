#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		Form(string name, bool iSsigned, int sign_grade, int exec_grade);
		Form(const Form& cpy);
		~Form();

		Form&	operator=(const Form& cpy);
		string	getName();
		bool	getIsSigned();
		int	getSignGrade();
		int	getExecGrade();
		void	beSigned(const Bureaucrat& bureaucrat);
		void	signForm();

		class	GradeTooHighException : public std::out_of_range
		{
			virtual	GradeTooHighException(string str);
		};

		class	GradeTooLowException : public std::out_of_range
		{
			virtual	GradeTooLowException(string str);
		};

		class	FormAlreadySignedException : public std::logic_error
		{
			virtual	FormAlreadySignedException(string str);
		}

	private:
		const string	name;
		bool		is_sign;
		const int	sign_grade;
		const int	exec_grade;
}

#endif
