#include "replace.hpp"

void ft_error(const std::string& errorStr) {
	std :: cerr << "\x1B[31m" + errorStr + "\033[0m"<< std::endl;
	exit (1);
}

std::string
replace(const std::string&	mutableStr, const std::string& substituteStr, std::string strInput)
{
	std::size_t pos;
	for (pos = strInput.find(mutableStr);
		pos != std::string::npos; pos = strInput.find(mutableStr)) {
		strInput.erase(pos, mutableStr.length());
		strInput.insert(pos, substituteStr);
	}
	return strInput;
}