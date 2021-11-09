
#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP
#include <iostream>

template <typename T, typename T1>
void iter(const T *array, const T1 &length, void (*fncPtr)(T const &)) {
	for (int i = 0; i < length; i++)
		fncPtr(array[i]);
}

//CHECKLIST
template <typename T>
void print(T const &x) {
	std::cout<<x<<std::endl;
}

class Awesome
{
public:
	Awesome(void) : _n(42) { return ;}
	int get(void) const {return this->_n; }
private:
	int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const & rhs) {
	o << rhs.get();
	return o;
}




#endif
