
#ifndef DAY04_DOG_HPP
#define DAY04_DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const std::string& type);
	Dog(const Dog &dog);
	Dog& operator= (const Dog &dog);
	~Dog();

	void makeSound() const;
};


#endif //DAY04_DOG_HPP
