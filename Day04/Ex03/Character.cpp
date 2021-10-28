
#include "Character.hpp"

Character::Character(): inventory() {
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		delete inventory[i];
}

Character::Character(std::string const& name):name(name), inventory() {

}

std::string const & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *m) {
	int i = -1;
	while (++i < 4)
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
}

void Character::unequip(int index) {
	this->inventory[index] = 0;
	std::cout << "Character unequip materia " << index << std::endl;
}

void Character::use(int index, ICharacter & target) {
	this->inventory[index]->use(target);
}
