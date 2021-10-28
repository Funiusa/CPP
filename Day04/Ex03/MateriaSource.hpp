#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria *inventory[4];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &materia_source);
	MateriaSource& operator= (const MateriaSource &materia_source);

	void learnMateria(AMateria* mat);
	AMateria* createMateria(std::string const & type);
};


#endif
