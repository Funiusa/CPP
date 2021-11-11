#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

template <typename T>
void print(T &con) {
	int nline = 0;

	for (typename T::iterator it = con.begin(); it != con.end(); it++) {
		if (nline % 15 == 0) {
			std::cout << std::endl;
		}
		nline++;
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

class Span {
private:
	 std::vector<unsigned int> _vec;
	 unsigned int _size;
public:
	Span(): _size(0) {};
	Span(unsigned int N) : _size(N) {};
	~Span() {};
	Span(const Span &other): _vec(other._vec), _size(other._size) {};
	Span &operator= (const Span &other);
	unsigned int getSize() { return this->_size; }

	void addNumber(unsigned int N);
	unsigned int shortestSpan();
	unsigned int longestSpan();
	std::vector<unsigned int> &getCont() {
		return this->_vec;
	}

};


#endif
