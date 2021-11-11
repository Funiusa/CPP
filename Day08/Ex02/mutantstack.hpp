
#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP


#include <iostream>
#include <stack>
#include <list>

#include <vector>

template <typename T, typename S = std::deque<T> >
class MutantStack: public std::stack<T, S> {
public:
	MutantStack<T, S> () {};
	MutantStack<T, S> (const MutantStack<T, S> &);
	MutantStack& operator= (const MutantStack& other);
	~MutantStack<T, S> () {};


	typedef typename std::stack<T, S>::container_type::iterator iterator;
	iterator begin();
	iterator end();

};

#endif //EX02_MUTANTSTACK_HPP
