#include "span.hpp"

void Span::addNumber(unsigned int N) {
	try {
		if (_vec.size() == _size)
			throw std::invalid_argument("Too much elements");
		else {
			_vec.push_back(N);
		}
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}

unsigned int Span::shortestSpan() {
	unsigned int diff, tmp;

	try {
		if (_size < 2)
			throw std::invalid_argument("More arguments needed to comparison");
		std::sort(_vec.rbegin(), _vec.rend());
		diff = _vec.at(0);
		for (int i = 0; i < (int) _size - 1; i++) {
			tmp = _vec[i] - _vec[i + 1];
			if (diff > tmp)
				diff = tmp;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return diff;
}

unsigned int Span::longestSpan() {
	try {
		if (_size < 2)
			throw std::invalid_argument("More arguments needed to comparison");
		std::sort(_vec.rbegin(), _vec.rend());
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (_vec[0] - _vec[_size - 1]);
}

Span &Span::operator=(const Span &other) {
	if (this == &other)
		return *this;
	 this->_vec = other._vec;
	 this->_size = other._size;
	return *this;
}

