#include <iostream>
#include <ctype.h>

void 	display(const char *str)
{
	std::cout << str << std::endl;
}

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc != 2)
	{
		if (argc == 1)
			display("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
		else
			display("Wrong number of args");
		return (1);
	}
	while (argv[1][i] != '\0')
	{
		std::cout << (char)toupper((unsigned char)argv[1][i]);
		i++;
	}
	std::cout << std::endl;
	return 0;
}
