#ifndef EX01_SERIALIZATION_HPP
#define EX01_SERIALIZATION_HPP

#include <iostream>

#include <stdint.h>

	typedef struct s_Data {
		std::string name;
		int age;
		float weight;
		float height;
		bool married;
	} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);



#endif
