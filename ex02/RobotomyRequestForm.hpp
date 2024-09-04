#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# define R_SGRADE 72
# define R_EGRADE 45
# include <cstdlib>
# include <ctime>
# include <fstream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(string target);
		RobotomyRequestForm(const RobotomyRequestForm& cpy);
		~RobotomyRequestForm();
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& cpy);

		string	getTarget() const;

	private:
		void		executeForm();
		const string	target;
};

#endif
