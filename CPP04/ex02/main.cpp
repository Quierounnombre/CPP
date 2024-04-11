#include "Animal/Animal.hpp"
#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"

# define SIZE_ARRAY 5

void leakss(void)
{
	system("leaks -q ABSTRACT");
}

int		main(void)
{
	atexit(leakss);
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	cout << j->getType() << " " << endl;
	cout << i->getType() << " " << endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	Animal	*zoo[SIZE_ARRAY];
	for (int k = 0; k < SIZE_ARRAY; k++)
	{
		if (k % 2)
			zoo[k] = new Dog();
		else
			zoo[k] = new Cat();
	}
	for (int k = 0; k < SIZE_ARRAY; k++)
	{
		delete zoo[k];
	}

	delete i;
	delete j;
	return 0;
}
