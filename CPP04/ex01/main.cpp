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
	Cat	*my_cat = new Cat();
	Cat *my_cat_2 = new Cat(*my_cat);

	cout << j->getType() << " " << endl;
	cout << i->getType() << " " << endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
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
	}
	for (int k = 0; k < SIZE_ARRAY; k++)
	{
		delete zoo[k];
	}
	/*
	Cat	test_1;
	Cat	test_2;
	test_1.brain->ideas[0] = "Potato";
	test_2 = test_1;
	for (int il = 0; il < BRAIN_SIZE; il++)
		cout << test_2.brain->getIdea(il) << endl;
	cout << "HERE-----------" << endl;
	for (int il = 0; il < BRAIN_SIZE; il++)
		cout << test_1.brain->getIdea(il) << endl;
	cout << &(test_2.brain)->ideas[0] << endl;
	cout << &(test_1.brain)->ideas[0] << endl;
	cout << &(test_2.brain) << endl;
	cout << &(test_1.brain) << endl;
	cout << &(test_2) << endl;
	cout << &(test_1) << endl;
	*/
	delete i;
	delete j;
	delete meta;
	delete my_cat_2;
	delete my_cat;
	return 0;
}
