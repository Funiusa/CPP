
#include "span.hpp"

int main()
{
	//===============================CHECKLIST=======================
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(12);
	std::cout << "Diff shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "sp: ";
	print(sp.getCont());
	std::cout << "Diff longest: " << sp.longestSpan() << std::endl;

	//==============================OTHER TEST=============================
	Span copy_sp(sp);
	std::cout << "copy_sp: ";
	print(copy_sp.getCont());

	std::cout << "new_copy: ";
	Span new_copy = copy_sp;
	print(new_copy.getCont());

	srand(time(NULL));

	Span span = Span(100);
	for (int i = 0; i < 100; i++)
		span.addNumber(10 + (rand() % 3000) % 100);
	std::cout << "span: ";
	print(span.getCont());
	std::cout << "Diff short: " << span.shortestSpan() << std::endl;
	std::cout << "Diff longest: " << span.longestSpan() << std::endl;
}

