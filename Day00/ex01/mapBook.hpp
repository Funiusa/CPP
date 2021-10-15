#ifndef MAPBOOK_CPP_MAPBOOK_HPP
#define MAPBOOK_CPP_MAPBOOK_HPP

#include <iostream>
#include <iomanip>

class myContact {
private:
    std :: string first_name;
    std :: string last_name;
    std :: string nickname;
    std :: string phone_number;
    std :: string darkest_secret;
	void printLine(std :: string line);
public:
    void GetContact(int index);
    void Search(int index);
    void Add();
};

#endif
