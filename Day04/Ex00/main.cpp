#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal("meta");
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();

	delete meta;
	delete j, delete i;

	std::cout << "---------------------------------------------------------" << std::endl;

	const WrongAnimal* metaWrong = new WrongAnimal("metaWrong");
	const WrongAnimal* wCat = new WrongCat();

	std::cout << wCat->getType() << std::endl;
	wCat->makeSound();
	metaWrong->makeSound();

	delete metaWrong, delete wCat;
	return 0;
}
