#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j[100];

	for (int i = 0; i < 100; i++) {
		if (i % 2)
			j[i] = new Dog();
		else
			j[i] = new Cat();
		j[i]->makeSound();
	}
	std::cout << "========================================================" << std::endl;
	for (int i = 0; i < 100; i++) {
		delete j[i];
	}
	std::cout << "========================================================" << std::endl;
	Dog dog1 = Dog();
	std::cout << "========================================================" << std::endl;
	dog1.useBrain().setIdea(1, "Human beans must give me the meal!!!");
	dog1.makeSound();
	std::cout << dog1.getType() << ": "
	<< dog1.useBrain().getIdea(1) << std::endl;
	dog1.useBrain().setIdea(0, "Where is my food???");

	Dog dog2 = Dog();
	dog2 = dog1;
	std::cout << dog2.useBrain().getIdea(0) << std::endl;

	std::cout << "========================================================" << std::endl;

	return 0;
}
