#include "Phone_book.class.hpp"

void 	display(const char *str)
{
	std::cout << str << std::endl;
}

int main(void)
{
	Phone_book crappy_book;
	std::string input_line;
	std::string commands[3] = {"ADD", "SEARCH", "EXIT"};
	while (1)
	{
		std::cout << "Enter command (\"ADD\", \"SEARCH\", \"EXIT\"): ";
		std::getline(std::cin, input_line);
		if (input_line.compare(commands[0]) == 0)
			crappy_book.add_contact();
		else if (input_line.compare(commands[1]) == 0)
			crappy_book.search_contact();
		else if (input_line.compare(commands[2]) == 0)
			exit(0);
		else
			std::cout << "Invalid command try again" << std::endl;
	}
}
