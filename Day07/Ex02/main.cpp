#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750



int main(int, char**)
{
	Array<int> orig(10);

	std::cout << "Original: ";
	iter(&orig.getArray(), orig.size(), fillArray);
	iter(&orig.getArray(), orig.size(), print);
	std::cout << std::endl;

	Array<int> copy(orig);
	std::cout << "CopyOrig: ";
	iter(&orig.getArray(), copy.size(), print);
	std::cout << std::endl;
	iter(&copy.getArray(), copy.size(), change); // Change copy
	std::cout << "Copy after change: ";
	iter(&copy.getArray(), copy.size(), print);
	std::cout << std::endl;
	std::cout << "\tOriginal: ";
	iter(&orig.getArray(), orig.size(), print);
	std::cout << std::endl;

	Array<int> testAssign = copy;
	std::cout << "Test assignment: ";
	iter(&testAssign.getArray(), testAssign.size(), print);
	std::cout << std::endl;
	std::cout << "Test Copy assignment: ";
	Array<int>copY = copy;
	iter(&copY.getArray(), testAssign.size(), print);



	// subject main
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}


	std::cout << std::endl;
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}

//int main() {
//
//	Array<int> intArray(5);
//	Array<double> doubleArray(5);
//
//	//printArray(intArray, 5, print);
//
//	for (unsigned int i = 0; i < intArray.size(); i++) {
//		intArray[i] = i + 1;
//	}
//	for (unsigned int i = 0; i < intArray.size(); i++) {
//		std::cout << intArray[i] << std::endl;
//	}
//
//
//	return 0;
//}


