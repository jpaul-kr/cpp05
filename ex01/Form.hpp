#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

using std::string;
class	Bureaucrat;


class Form
{
	public:
		Form();
		Form(string name, bool iSsigned, int sign_grade, int exec_grade);
		Form(const Form& cpy);
		~Form();

		Form&	operator=(const Form& cpy);
		string		getName() const;
		bool		getIsSigned() const;
		int		getSignGrade() const;
		int		getExecGrade() const;
		void		beSigned(const Bureaucrat& bureaucrat);
		void		signForm();

		class	GradeTooHighException : public std::out_of_range
		{
			public:
				GradeTooHighException(string str);
		};

		class	GradeTooLowException : public std::out_of_range
		{
			public:
				GradeTooLowException(string str);
		};

		class	FormAlreadySignedException : public std::logic_error
		{
			public:
				FormAlreadySignedException(string str);
		};

	private:
		const string	name;
		bool		is_sign;
		const int	sign_grade;
		const int	exec_grade;
};

std::ostream&	operator<<(std::ostream& os, const Form& form);

#endif
