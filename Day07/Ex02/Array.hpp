
#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP
#include <iostream>
#include <cassert>
#include <cstdlib>

template <typename T1>
void print(T1 &elem, T1 &iter) {
	(void)iter;
	std::cout << elem << " ";
}

template <typename T1>
void change(T1 &elem, T1 &iter) {
	(void)iter;
	elem *= elem;
}

template <typename T1>
void fillArray(T1 &elem, T1 &iter) {
	elem = iter;
}

template <typename T, typename T1>
void iter( T *array, const T1 &length, void (*fncPtr)(T &, T &)) {
	for (int i = 0; i < (int)length; i++) {
		fncPtr(array[i], i);
	}
}

template <class T>
class Array {
private:
	unsigned int m_length;
	T *m_array;
public:
	Array() {
		m_length = 0;
		m_array = NULL;
	};

	~Array() {
		if (this->m_array)
		delete[] this->m_array;
	};

	Array(unsigned int n): m_length(n) {
		this->m_array = new T[this->m_length];
		for (unsigned int i = 0; i < this->m_length; i++)
			this->m_array[i] = 0;
	};

	Array(const Array<T> &other): m_length(other.m_length) {
		if (other.m_array) {
			this->m_array = new T[other.m_length];
			for (unsigned int i = 0; i < other.m_length; i++) {
				this->m_array[i] = other.m_array[i];
			}
		}
		else
			this->m_array = 0;
	};

	 Array<T> &operator= (const Array<T> &other) {
		if (this == &other) return *this;
		if (this->m_array) delete [] this->m_array;
		if (other.m_array) {
			this->m_array = new T[other.m_length];
			for (int i = 0; i < other.m_length; i++)
				this->m_array[i] = other->m_array[i];
		}
		else
			other.m_array = 0;
		this->m_length = other.m_length;
		return *this;
	}

	T& operator[] (unsigned int index) {
		if (!this->m_array)
			throw std::invalid_argument("Empty array");
		if ( index < 0 || this->m_length <= index )
			throw std::invalid_argument("Index error");
		return this->m_array[index];
	}

	unsigned int size() {
		return this->m_length;
	}

	T& getArray() {
		return *this->m_array;
	 }


};

#endif
