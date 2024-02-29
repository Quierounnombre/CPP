#include "../RobotomyRequestForm.hpp"

void	RobotomyRequestForm::execute(Bureaucrat const &B) const
{
	bool	did_target_become_robot;

	can_be_Executed(B);
	did_target_become_robot = std::rand() % 2;
	cout << "BzzzzZZZZZz!!!" << endl;
	if (did_target_become_robot)
		cout << this->getName() << " Become a robot" << endl;
	else
		cout << this->getName() << " Failed the procces" << endl;
}