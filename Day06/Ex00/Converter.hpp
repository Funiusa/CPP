
#ifndef EX00_CONVERTER_HPP
#define EX00_CONVERTER_HPP

#include <iostream>
#include <ostream>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <string>


class Converter {
public:
	Converter();
	Converter &operator= (const Converter &converter);
	~Converter();

	void convertToChar(const char *value);
	void convertToInt(const char *value);
	void convertToFloat(const char *value);
	void convertToDouble(const char *value);

	class MyException : public std::exception
	{
	private:
		std::string err_string;
	public:
		MyException(const std::string& err_string): err_string(err_string) {};
		virtual ~MyException() throw() {};
		virtual const char* what() const throw();
	};



};

	std::ostream &operator<< (std::ostream &out, const Converter &conv);

#endif
