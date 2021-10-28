#ifndef DAY04_ANIMAL_HPP
#define DAY04_ANIMAL_HPP
#include <iostream>

class A_animal {
protected:
	std::string m_type;
public:
	A_animal();
	A_animal(const std::string& type);
	A_animal(const A_animal &animal);
	virtual ~A_animal();

	std::string getType() const;
	void setType(const std::string &type);
	A_animal& operator= (const A_animal &other);

	virtual void makeSound() const = 0;
};



#endif
