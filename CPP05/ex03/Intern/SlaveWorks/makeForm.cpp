#include "../Intern.hpp"

static AForm	*make_pardon(string s)
{
	PresidentialPardonForm	*form = new PresidentialPardonForm(s);
	return (form);
}

static AForm	*make_robot(string s)
{
	RobotomyRequestForm	*form = new RobotomyRequestForm(s);
	return (form);
}

static AForm	*make_tree(string s)
{
	ShrubberyCreationForm	*form = new ShrubberyCreationForm(s);
	return (form);
}


AForm	*Intern::makeForm(string form_name, string target)
{
	string			set_of_defined_forms[] =
	{
		INTERN_PARDON,
		INTERN_ROBOT,
		INTERN_SHRUBBERY
	};
	AForm	*(*func[])(string s) =
	{
		&make_pardon,
		&make_robot,
		&make_tree
	};
	n_int	i;

	i = 0;
	while (i < INTERN_MAX_FORMS)
	{
		if (set_of_defined_forms[i] == form_name)
		{
			cout << INTERN_CREATE << form_name << endl;
			return (func[i](target));
		}
		i++;
	}
	cout << INTERN_CANT_CREATE_FORM << endl;
	return (NULL);
}
