
#ifndef DAY04_WRONGCAT_HPP
#define DAY04_WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const std::string& type);
	WrongCat(const WrongCat &cat);
	WrongCat& operator= (const WrongCat &cat);
	~WrongCat();

	virtual std::string getType() const;
	void makeSound() const;
};


#endif