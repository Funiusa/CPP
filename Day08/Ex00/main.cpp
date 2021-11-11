
#include "easyfind.hpp"

template <typename T>
void finder (T &arr, int el) {
	typename T::iterator it;
	try {
		it = easyfind(arr, el);
		std:: cout << "Element : " << *it;
		std::cout << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

template <typename T>
void fill(T &cont) {
	for (int i = 0; i < 100; i++) {
		cont.push_back((rand() % 3000) % 100);
	}
}

template <typename T>
void print(T & con) {
	int nline = 0;

	for (typename T::iterator it = con.begin(); it != con.end(); it++) {
		if (nline % 15 == 0) {
			std::cout << std::endl;
		}
		nline++;
		std::cout << *it << " ";
	}
	std::cout << std::endl << std::endl;
}

int main()
{
	srand(time(NULL));

	//++++++++++++++++++++++++++++++++vector++++++++++++++++++++++++++++
	std::vector<int> vect(1);

	std::cout << "Vector";
	fill(vect);
	print(vect);
	finder(vect, 4);
	finder(vect, 9);
	finder(vect, 400); // never
	std::cout << std::endl;

	//+++++++++++++++++++++++++++++++list++++++++++++++++++++++++++++++++++
	std::list<int> list;

	std::cout << "List";
	fill(list);
	print(list);
	finder(list, 54);
	finder(list, 42);
	finder(list,110); // never

}


