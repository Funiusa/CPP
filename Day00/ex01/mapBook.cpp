
#include "mapBook.hpp"

void myContact :: GetContact(int index) {
    (void) index;
    std :: cout
            << "| "<< first_name << std :: endl
            << "| " << last_name << std :: endl
            << "| " << nickname << std :: endl
            << "| " << phone_number << std :: endl
            << "| " << darkest_secret << std :: endl;
}

void myContact :: Add() {
    std :: cout << "input first name: ";
    std :: cin >> first_name;
    std :: cout << "input last name: ";
    std :: cin >> last_name;
    std :: cout << "input nickname: ";
    std :: cin >> nickname;
    std :: cout << "input phone number: ";
    std :: cin >> phone_number;
    std :: cout << "input darkest secret: ";
    std :: cin >> darkest_secret;
}

void myContact :: Search(int index) {
    std ::cout << "*" << std :: setw(50) << "*" << std :: endl;
    std :: cout << std :: right << std :: setw(10) << index;
    printLine(first_name);
    printLine(last_name);
    printLine(nickname);
    std :: cout << "|" << std :: endl;
    std ::cout << "*" << std :: setw(50) << "*" << std :: endl;
}

int main()
{
	int i = 0;
	int size = 0;
	myContact contact[8];
	std :: string command;

	while (command != "EXIT")
	{
		std :: cout << "Insert a command(ADD, SEARCH or EXIT): ";
		std :: cin >> command;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
		{
			if (i == 8) i = 0;
			contact[i++].Add();
			if (size < 8)
				size++;
		}
		else if (command == "SEARCH")
		{
			int j = 0;
			while (j != size)
			{
				contact[j].Search(j + 1);
				j++;
			}
			if (j > 0) {
				int number = 0;
				std::cout << "Insert index(1 - 8): ";
				if (std::cin >> number) {
					if (j >= number && number > 0 && number < 9)
						contact[number - 1].GetContact(number);
				}
				else {
					std::cin.clear();
					std::cin.ignore(32767, '\n');
				}
			}
		}
	}
	return 0;
}
