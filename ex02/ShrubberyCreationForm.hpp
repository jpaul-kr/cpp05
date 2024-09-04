#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# define S_SGRADE 145
# define S_EGRADE 137
# include "AForm.hpp"
# include <fstream>
# include <string>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& cpy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& cpy);

		string	getTarget() const;
		void	executeForm();

	private:
		const string target;
};

#endif
