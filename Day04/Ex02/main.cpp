#include "A_animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const A_animal* j = new Dog();
	const A_animal* i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	j->makeSound();
	i->makeSound();
	delete j;
	delete i;
	return 0;
}
