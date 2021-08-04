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
		i++;
	return (i);
}

int main(void)
{
	Karen W1;
	W1.complain(get_complains()[DEBUG]);
	W1.complain(get_complains()[INFO]);
	W1.complain(get_complains()[WARNING]);
	W1.complain(get_complains()[ERROR]);
	return (0);
}
