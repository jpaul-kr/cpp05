#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# define 25 SGRADE
# define 5 EGRADE
# include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(string target);
		PresidentialPardonForm(const PresidentialPardonForm& cpy);
		~PresidentialPardonForm();
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& cpy);

		string	getTarget() const;
		void	execPardon();
		
	private:
		const string	target;
};

#endif
