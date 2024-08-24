#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		Form();
		Form(const Form& cpy);
		~Form();

		Form&	operator=(const Form& cpy);
		void	beSigned(const Bureaucrat& bureaucrat);
		void	signForm();

	private:
		const string	name;
		bool		is_sign;
		const int	sign_grade;
		const int	exec_grade;
}

#endif
