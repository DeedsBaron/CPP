#pragma once
#include <iostream>
#include <string>

enum Complain_{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	typedef void (Karen::*Pcomplain)(void);
	Pcomplain complains[4];
	void complain(std::string level);
	void karen_filter(int level, Pcomplain *complains);
};

const	std::string *get_complains(void);
int		ret_index(std::string level);
void	colorzzz(int level);
