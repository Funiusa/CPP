
#ifndef DAY04_CAT_HPP
#define DAY04_CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain *m_brain;
public:
	Cat();
	Cat(const Cat &cat);
	Cat& operator= (const Cat &cat);
	~Cat();

	void makeSound() const;
	Brain& useBrain();
};


#endif //DAY04_CAT_HPP
