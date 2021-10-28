
#ifndef DAY04_WRONG_ANIMAL_HPP
#define DAY04_WRONG_ANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal {
protected:
	std::string m_type;
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &animal);
	virtual ~WrongAnimal();

	virtual std::string getType() const;
	WrongAnimal &operator= (const WrongAnimal &animal);

	void makeSound() const;
};


#endif
