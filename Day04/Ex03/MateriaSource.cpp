#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : inventory() {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource &materia_source) : inventory() {
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = materia_source.inventory[i]->clone();
	}
}

MateriaSource& MateriaSource::operator= (const MateriaSource &materia_source) {
	if (this == &materia_source)
		return *this;
	MateriaSource::~MateriaSource();
		for (int i = 0; i < 4; i++) {
			this->inventory[i] = materia_source.inventory[i]->clone();
		}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	int i = -1;
	while (++i < 4)
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] && !this->inventory[i]->getType().compare(type)) {
			return this->inventory[i]->clone();
		}
	}
	return NULL;
}
