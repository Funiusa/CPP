#include "Serialization.hpp"

uintptr_t serialize (Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main() {

	Data *customer = new Data;

	customer->name = "Denis";
	customer->age = 32;
	customer->height = 187;
	customer->weight = 72.4;
	customer->married = true;

	std::cout << "Customer: " << customer->name << std::endl;
	std::cout << "Age: " << customer->age << std::endl;
	std::cout << "Height: " << customer->height << std::endl;
	std::cout << "Weight: " << customer->weight << std::endl;
	std::cout << "Social status: ";
	if (customer->married)
		std::cout << "married" << std::endl;
	else
		std::cout << "single" << std::endl;

	std::cout << std::endl;

	uintptr_t raw = serialize(customer); // Copy
	Data *copy_customer = deserialize(raw); // Paste

	std::cout << "Copy customer: " << copy_customer->name << std::endl;
	std::cout << "Age: " << copy_customer->age << std::endl;
	std::cout << "Height: " << copy_customer->height - 10 << std::endl;
	std::cout << "Weight: " << copy_customer->weight << std::endl;
	std::cout << "Social status: ";
	if (copy_customer->married)
		std::cout << "married" << std::endl;
	else
		std::cout << "single" << std::endl;

	delete customer;

	return 0;
}
