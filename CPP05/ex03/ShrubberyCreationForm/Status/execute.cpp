#include "../ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::execute(Bureaucrat const &B) const
{
	std::fstream	file;

	this->can_be_Executed(B);
	file.open(this->getName() + SHRUBBERYCREATIONFORM_FILE_NAME, std::ios::out);
	if (!(file.is_open()))
		throw std::ios_base::failure("Failed to open file " + this->getName());
	file << SHRUBBERYCREATIONFORM_TREE;
	file.close();
}
