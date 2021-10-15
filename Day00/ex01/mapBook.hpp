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
    void printLine(std :: string line) {
        std :: cout << "\x1B[36m|\033[0m" << std :: right << std :: setw(10);
        if (line.size() > 10)
            std :: cout << line.substr(0, 9) + "\x1B[31m.\033[0m";
        else
            std :: cout << line;
    }
public:
    void GetContact(int index);
    void Search(int index);
    void Add();
};

#endif
