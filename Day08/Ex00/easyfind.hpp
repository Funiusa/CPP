
#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <list>
#include <exception>
#include "typeinfo"

template <typename T>
typename T::iterator easyfind(T &source, const int &elem) {
	typename T::iterator it;
	it = std::find(source.begin(), source.end(), elem);
	if (it != source.end())
		return it;
	throw std::invalid_argument("Element not found");

}


#endif
