#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# define 72 SGRADE
# define 45 EGRADE
# include <cstdlib>
# include <ftream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(string target);
		RobotomyRequestForm(const RobotomyRequestForm& cpy);
		~RobotomyRequestForm();
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& cpy);

		void	getTarget() const;
		void	execRobotomy();

	private:
		const string	target;
}
#endif
