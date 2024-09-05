#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# define P_SGRADE	25
# define P_EGRADE	5
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
		
	private:
		void		executeForm();
		const string	target;
};

#endif
