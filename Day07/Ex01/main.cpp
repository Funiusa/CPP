#include "iter.hpp"

int main() {

	std::cout << "Checklist" << std::endl;
	{
		int tab[] = {0, 1, 2, 3, 4};
		Awesome tab2[5];

		iter(tab, 5, print);
		iter(tab2, 5, print);
		std::cout << std::endl;
	}
	{
		std::string array[] = {"first", "second", "third"};
		std::cout << "String: ";
		iter(array, 3, print);
		std::cout << std::endl;
	}
	{
		char array[] = {'w', 'h', 'a', 't', '?'};
		std::cout << "Char: ";
		iter(array, 5, print);
		std::cout << std::endl;
	}
	return 0;
}
