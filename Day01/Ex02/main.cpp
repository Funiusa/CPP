#include <iostream>

int main (void) {

	std :: string brain = "HI THIS IS BRAIN";
	std :: string* brain_ptr = &brain;
	std :: string& brain_ref = brain;

	std :: cout << "brain address: " << &brain << std :: endl;
	std :: cout << "brain_ptr address: " << brain_ptr << std :: endl;
	std :: cout << "brain_ref address: " << &brain_ref << std :: endl;

	std :: cout << "brain: " << brain << std :: endl;
	std :: cout << "brain_ptr: " << *brain_ptr << std :: endl;
	std :: cout << "brain_ref: " << brain_ref << std :: endl;
	return 0;
}