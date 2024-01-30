#include "Animal/Animal.hpp"
#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"

# define SIZE_ARRAY 5

void leakss(void)
{
	system("leaks -q BRAINY");
}

int		main(void)
{
	atexit(leakss);
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	//Cat	*my_cat;
	//Cat *my_cat_2 = new Cat();

	cout << j->getType() << " " << endl;
	cout << i->getType() << " " << endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	//my_cat = my_cat_2;
	//cout << my_cat_2->brain << endl;;
	//cout << my_cat->brain << endl;;
	meta->makeSound();

	Animal	*zoo[SIZE_ARRAY];
	for (int k = 0; k < SIZE_ARRAY; k++)
	{
		if (k % 2)
			zoo[k] = new Dog();
		else
			zoo[k] = new Cat();
		cout << zoo[k] << endl;
	}
	for (int k = 0; k < SIZE_ARRAY; k++)
	{
		cout << zoo[k] << endl;
		delete zoo[k];
	}

	delete i;
	delete j;
	delete meta;
	//delete my_cat_2;
	return 0;
}
