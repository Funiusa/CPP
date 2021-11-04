#include <cstdlib>
#include <iostream>

class Base { public: virtual ~Base() {} };
class A: public Base { public: virtual ~A() {} };
class B: public Base { public: virtual ~B() {} };
class C: public Base { public: virtual ~C() {} };

Base* generate(void) {

	switch ((rand() % 3000) % 3) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
		default:
			std::cout << "Error" << std::endl;
			exit (1);
	}
}

void identify(Base* p) {

	std::cout << "Pointer : ";
	if (dynamic_cast<A*>(p))
		std::cout << "Class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Class C" << std::endl;
}

void identify(Base& p) {

	std::cout << "Reference : ";

	Base tmp;
	std::string ret;
	try {
		tmp = dynamic_cast<A&>(p);
		std::cout << "Class A" << std::endl;
	}
	 catch (std::exception &e) {}
	try {
		tmp = dynamic_cast<B&>(p);
		std::cout << "Class B" << std::endl;
	}
	catch (std::exception &e) {}
	try {
		tmp = dynamic_cast<C&>(p);
		std::cout << "Class C" << std::endl;
	}
	catch (std::exception &e) {}
}

int main() {
	srand(38999);

	Base *p;

	for (int i = 0; i < 10; i++) {
		p = generate();
		identify(p);
		identify(*p);
		std::cout << std::endl;
		delete p;
	}
	return 0;
}
