#include "Animal/Animal.hpp"
#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"

int		main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	cout << j->getType() << " " << endl;
	cout << i->getType() << " " << endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	return 0;
}
