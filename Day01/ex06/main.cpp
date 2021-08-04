#include "Karen.hpp"

const std::string *get_complains(void)
{
	static std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	return (complains);
}

int ret_index(std::string level)
{
	int i = 0;
	while (level != get_complains()[i])
	{
		i++;
		if (i == 4)
			return (100);
	}
	return (i);
}

void colorzzz(int level)
{
	switch (level)
	{
		case 0:
			std::cout << "\033[0;32m[ " << get_complains()[level] << " ] \033[m" << std::endl;
			break;
		case 1:
			std::cout << "\033[0;34m[ " << get_complains()[level] << " ] \033[m" << std::endl;
			break;
		case 2:
			std::cout << "\033[0;35m[ " << get_complains()[level] << " ] \033[m" << std::endl;
			break;
		case 3:
			std::cout << "\033[0;36m[ " << get_complains()[level] << " ] \033[m" << std::endl;
			break;
		default:
			break;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "\033[0;31mWrong number of arguments" << std::endl;
		return (1);
	}
	Karen W1;
	W1.complain(argv[1]);
	return (0);
}
