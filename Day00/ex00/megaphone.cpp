#include <iostream>

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int count = 1; count < argc; count++)
			for (int i = 0; argv[count][i] != '\0'; i++)
				std::cout << (char)toupper(argv[count][i]);
		std::cout << std::endl;
	}
	else if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
