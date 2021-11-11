#include "mutantstack.hpp"

template<typename T, typename S>
MutantStack<T, S>::MutantStack(const MutantStack<T, S> &other): std::stack<T, S>(other) {
}

template<typename T, typename S>
MutantStack<T, S> &MutantStack<T, S>::operator=(const MutantStack &other) {
	std::stack<T, S>::operator = (other);
}

template<typename T, typename S>
typename MutantStack<T, S>::iterator MutantStack<T, S>::begin() {
	return this->c.begin();
}

template<typename T, typename S>
typename MutantStack<T, S>::iterator MutantStack<T, S>::end() {
	return this->c.end();
}
