#ifndef DAY04_ANIMAL_HPP
#define DAY04_ANIMAL_HPP
#include <iostream>

class Animal {
protected:
	std::string m_type;
public:
	Animal();
	Animal(const std::string& type);
	Animal(const Animal &animal);
	virtual ~Animal();

	std::string getType() const;
	void setType(const std::string &type);
	Animal& operator= (const Animal &other);

	virtual void makeSound() const;
};

#endif
