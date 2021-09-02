#include <iostream>
#include <string>
#include <iomanip>
#include "Colors.hpp"
#include <climits>

int 	disp_error(const std::string s1, int i)
{
	std::cout << RED << s1 << RES << std::endl;
 	return (i);
}

void 	disp_char(int val)
{
	std::cout << CYAN << "char: " << RES;
	if (val >= 32 && val <= 127)
		std::cout << "'" << static_cast<char>(val) << "'" << std::endl;
	else
		std::cout << RED << "Non displayable\n" << RES;
}

bool 	is_digits_float(const char* str)
{
	if (str[0] == '-')
		str++;
	while (isdigit(*str))
		str++;
	if (str[0] == '.' && isdigit(str[1]) && str[2] == '\0')
		return (true);
	else
		return (false);
}

bool 	is_digits(const char* str)
{
	if (str[0] == '-')
		str++;
	while (*str != '\0')
	{
		if (isdigit(*str))
			str++;
		else
			return (false);
	}
	return (true);
}

void 	disp_int(double val)
{
	if (val > INT_MAX || val < INT_MIN)
		std::cout << PURPLE << "int: " << RED << "Overflow\n";
	else
		std::cout << PURPLE << "int: " << RES << static_cast<int>(val) << std::endl;
}

bool 	lit_char(const char* str)
{
	return (strlen(str) == 1 && isalpha(str[0]) ? true : false);
}

bool 	lit_int(const char* str)
{
	return (is_digits(str) ? true : false);
}

bool	lit_float(const char* str)
{
	char* new_str = NULL;
	if (str[strlen(str) - 1] == 'f')
	{
		new_str = strdup(str);
		new_str[strlen(new_str) - 1] = '\0';
		if (is_digits_float(new_str) || strcmp(str, "+inff") == 0 || strcmp(str, "-inff") == 0 || strcmp(str, "nanf") == 0)
		{
			free(new_str);
			return (true);
		}
		else
		{
			free(new_str);
			return (false);
		}
	}
	return (false);
}

bool	lit_double(const char* str)
{
	return ((is_digits_float(str) || strcmp(str, "+inf") == 0 || strcmp(str, "-inf") == 0 || strcmp(str, "nan") == 0) ? true : false);
}

void 	detect_type(const char* str)
{
	if (lit_char(str))
	{
		std::cout << CYAN << "char: "  << RES << str[0] << std::endl;
		std::cout << PURPLE << "int: " << RES << static_cast<int>(str[0]) << std::endl;
		std::cout << std::fixed << std::setprecision(1) << YELLOW << "float: " << RES << static_cast<float>(str[0]) << "f" << std::endl;
		std::cout << GREEN << "double: " << RES << static_cast<double>(str[0]) << std::endl;
	}
	else if (lit_int(str))
	{

		double	val = std::strtol(str, nullptr, 10);
		disp_char(val);
		disp_int(val);
		std::cout << std::fixed << std::setprecision(1) << YELLOW << "float: " << RES << static_cast<float>(val) << "f" << std::endl;
		std::cout << GREEN << "double: " << RES << static_cast<double>(val) << std::endl;
	}
	else if (lit_float(str))
	{
		float val = std::strtof(str, nullptr);
		if (strcmp(str, "-inff") == 0 || strcmp(str, "nanf") == 0 || strcmp(str, "+inff") == 0)
		{
			std::cout << CYAN << "char: "  << RED << "Impossible\n" << RES;
			std::cout << PURPLE << "int: " << RED << "Impossible\n" << RES;
		}
		else
		{
			disp_char(val);
			disp_int(val);
		}
		std::cout << std::fixed << std::setprecision(1) << YELLOW << "float: " << RES << val << "f" << std::endl;
		std::cout << GREEN << "double: " << RES << static_cast<double>(val) << std::endl;
	}
	else if (lit_double(str))
	{
		double val = std::strtod(str, nullptr);
		if (strcmp(str, "-inf") == 0 || strcmp(str, "nan") == 0 || strcmp(str, "+inf") == 0)
		{
			std::cout << CYAN << "char: "  << RED << "Impossible\n" << RES;
			std::cout << PURPLE << "int: " << RED << "Impossible\n" << RES;
		}
		else
		{
			disp_char(val);
			disp_int(val);
		}
		std::cout << std::fixed << std::setprecision(1) << YELLOW << "float: " << RES << static_cast<float>(val) << "f" << std::endl;
		std::cout << GREEN << "double: " << RES << val << std::endl;
	}
	else if (!lit_char(str) && !lit_int(str) && !lit_float(str) && !lit_double(str))
	{
		std::cout << CYAN << "char: "  << RED << "Non displayable\n" << RES;
		std::cout << PURPLE << "int: " << RED << "Impossible\n" << RES;
		std::cout << YELLOW << "float: " << RED << "Impossible\n" << RES;
		std::cout << GREEN << "double: " << RED << "Impossible\n" << RES;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2)
		return (disp_error("Wrong number of arguments!", -1));
	const std::string		str = argv[1];
	detect_type(argv[1]);
	return (0);
}