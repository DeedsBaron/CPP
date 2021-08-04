#ifndef PHONE_BOOK_CLASS_HPP
# define PHONE_BOOK_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <limits.h>

class	Phone_book{

public:
	int 	count;
	int 	search_count;
	std::string info[8][5];
	void add_contact(void);
	void search_contact(void);
	Phone_book(void);
	~Phone_book(void);
};

#endif
