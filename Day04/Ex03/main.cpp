#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Fire.hpp"
//
//int main()
//{
//	IMateriaSource* src = new MateriaSource();
//
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
//	src->learnMateria(new Fire());
//
//	ICharacter* me = new Character("me");
//	ICharacter* bob = new Character("bob");
//	AMateria* tmp;
//
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//
//	std::cout << "=============================================" << std::endl;
//
//	tmp = src->createMateria("fire");
//	bob->equip(tmp);
//	tmp = src->createMateria("cure");
//	bob->equip(tmp);
//	me->use(0, *bob); // BOB
//	me->use(1, *bob); // BOB
//	bob->use(0, *me); // ME
//	bob->unequip(0);
//	tmp = src->createMateria("ice");
//	bob->equip(tmp);
//	bob->use(0, *me);
//	bob->use(1, *me);
//
//	std::cout << "=============================================" << std::endl;
//
//	me->unequip(0);
//	me->unequip(1);
//	bob->unequip(1);
//
//	delete bob;
//	delete me;
//	delete src;
//	return 0;
//}
int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}