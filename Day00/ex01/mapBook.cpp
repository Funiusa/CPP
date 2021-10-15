nclude "mapBook.hpp"

void myContact ::  printLine(std :: string line) {
	std :: cout << "\x1B[36m|\033[0m" << std :: right << std :: setw(10);
	if (line.size() > 10)
		std :: cout << line.substr(0, 9) + "\x1B[31m.\033[0m";
	else
		std :: cout << line;
}

void myContact :: GetContact(int index) {
	(void) index;
	std :: cout << "\x1B[35m\tFirst name\033[0m\x1B[35m | \033[0m" << first_name << std :: endl
			 << "\x1B[35m\tLast name\033[0m\x1B[35m  | \033[0m" << last_name << std :: endl
			 << "\x1B[35m\tNickname\033[0m\x1B[35m   | \033[0m" << nickname << std :: endl
			 << "\x1B[35m\tPhone numbr\033[0m\x1B[35m| \033[0m" << phone_number << std :: endl
			 << "\x1B[35m\tDark secret\033[0m\x1B[35m| \033[0m" << darkest_secret << std :: endl;
}

void myContact :: Add() {
	std :: cout << "\x1B[34minput first name: \033[0m";
	std :: cin >> first_name;
	std :: cout << "\x1B[34minput last name: \033[0m";
	std :: cin >> last_name;
	std :: cout << "\x1B[34minput nickname: \033[0m";
	std :: cin >> nickname;
	std :: cout << "\x1B[34minput phone number: \033[0m";
	std :: cin >> phone_number;
	std :: cout << "\x1B[34minput darkest secret: \033[0m";
	std :: cin >> darkest_secret;
}

void myContact :: Search(int index) {
	std::cout << std::right << std::setw(10) << index;
	printLine(first_name);
	printLine(last_name);
	printLine(nickname);
	std::cout << "\x1B[36m|\033[0m" << std::endl;
}

void search(myContact contact[8], int size) {
	int	j = 0;
	std::cout << "\x1B[36m*------------------------------------------*\033[0m\n";
	while (j != size)
	{
		contact[j].Search(j + 1);
		j++;
	}
	std::cout << "\x1B[36m*------------------------------------------*\033[0m\n";
	if (j > 0) {
		int number = 0;
		std::cout << "\x1B[35mInsert index(1 - 8): \033[0m";
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

int main()
{
	int	i = 0;
	int	size = 0;
	myContact contact[8];
	
	std :: string command;
	std :: cout << "\t\t\x1B[32m███╗   ███╗ █████╗ ██████╗     ██████╗  ██████╗  ██████╗ ██╗  ██╗\033[0m\n"
	               "\t\t\x1B[32m████╗ ████║██╔══██╗██╔══██╗    ██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝\033[0m\n"
	               "\t\t\x1B[32m██╔████╔██║███████║██████╔╝    ██████╔╝██║   ██║██║   ██║█████╔╝ \033[0m\n"
	               "\t\t\x1B[32m██║╚██╔╝██║██╔══██║██╔═══╝     ██╔══██╗██║   ██║██║   ██║██╔═██╗ \033[0m\n"
	               "\t\t\x1B[32m██║ ╚═╝ ██║██║  ██║██║         ██████╔╝╚██████╔╝╚██████╔╝██║  ██╗\033[0m\n"
	               "\t\t\x1B[32m╚═╝     ╚═╝╚═╝  ╚═╝╚═╝         ╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝\033[0m"
		   << "\n\t\t\t\t*Welcome to M.a.p. Book*\n\n";
	while (command != "EXIT")
	{
		std :: cout << "\x1B[33mInsert a command(ADD, SEARCH or EXIT): \033[0m";
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
			search(contact, size);
	}
	return 0;
}

