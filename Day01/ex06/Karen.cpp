#include "Karen.hpp"

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough!\nIf you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::karen_filter(int level, Pcomplain *complains)
{
	while (level < 4)
	{
		colorzzz(level);
		(this->*complains[level])();
		std::cout << std::endl;
		level++;
	}
}

void Karen::complain(std::string level)
{
	int i_level = ret_index(level);
	complains[0] = &Karen::debug;
	complains[1] = &Karen::info;
	complains[2] = &Karen::warning;
	complains[3] = &Karen::error;
	switch (i_level)
	{
		case 0:
			karen_filter(i_level, complains);
			break;
		case 1:
			karen_filter(i_level, complains);
			break;
		case 2:
			karen_filter(i_level, complains);
			break;
		case 3:
			karen_filter(i_level, complains);
			break;
		default:
			std::cout << "\033[0;33m[ Probably complaining about insignificant problems ]" << std::endl;
			break;;
	}
}
