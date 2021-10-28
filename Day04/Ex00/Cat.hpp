
#ifndef DAY04_CAT_HPP
#define DAY04_CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const std::string &type);
	Cat(const Cat &cat);
	Cat& operator= (const Cat &cat);
	~Cat();
	void makeSound() const;
};


#endif //DAY04_CAT_HPP
