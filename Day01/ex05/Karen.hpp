#pragma once
#include <iostream>

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
	void complain(std::string level);

	typedef void (Karen::*Pcomplain)(void);
	Pcomplain complains[4];
};

const	std::string *get_complains(void);
int		ret_index(std::string level);
