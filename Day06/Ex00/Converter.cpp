#include <cmath>
#include "Converter.hpp"

Converter::Converter() {

}

Converter::~Converter() {

}

Converter &Converter::operator=(const Converter &converter) {
	if (this == &converter)
		return *this;
	*this = converter;
	return *this;
}

void Converter::convertToChar(const char *value) {
	try {
		int tmp = strtol(value, NULL, 10);

		std::cout << "Char: ";
		if (strlen(value) == 1 && *value != '0' && !isdigit(*value)) {
			std::cout << "\'" << static_cast<const char>(*value) << "\'";
		} else if (tmp < 0 || tmp > CHAR_MAX || (!tmp && strlen(value) > 1))
			throw Converter::MyException("impossible");
		else if (tmp == 0 || !strcmp(value, "0") || !isprint((int) tmp))
			throw Converter::MyException("Non display");
		else
			std::cout << "\'"  << static_cast<const char>(tmp) << "\'";
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
}

void Converter::convertToInt(const char *value) {
	long int ret = strtol(value, NULL, 10);

	std::cout << "Int: ";
	if (ret == 0 && strlen(value) > 1)
		std::cout << "impossible";
	else if (!std::isdigit(*value) && strlen(value) == 1)
		std::cout << static_cast<int>(*value);
	else
		std::cout << ret;

}

void Converter::convertToFloat(const char *value) {
	try {
		std::cout << "Float: ";
		float ret = atof(value);

		if (!ret && strcmp(value, "0") != 0 && strlen(value) == 1)
		{
			if (strlen(value) == 1 && isprint(*value))
				std::cout << static_cast<const float>(*value);
			else
				throw Converter::MyException("impossible");
		}
		else
			std::cout << ret;
		if (ret == (int) ret || ret - std::floor(ret) == 0)
			std::cout << ".0";
		std::cout << "f";
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}
}

void Converter::convertToDouble(const char *value) {
	try {
		std::cout << "Double: ";
		double ret = strtod(value, NULL);

		if (!ret && strcmp(value, "0") != 0 && strlen(value) == 1)
		{
			if (strlen(value) == 1 && isprint(*value))
				std::cout << static_cast<const double>(*value);
			else
				throw Converter::MyException("impossible");
		}
		else
			std::cout << ret;
		if (ret == (int) ret || ret - std::floor(ret) == 0)
			std::cout << ".0";
	}
	catch (std::exception &e) {
		std::cout << e.what();
	}

}

const char *Converter::MyException::what() const throw() {
	return err_string.c_str();
}
