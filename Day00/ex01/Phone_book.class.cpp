#include "Phone_book.class.hpp"

Phone_book::Phone_book(void)
{
	this->count = 0;
	this->search_count = 0;
	return ;
}

Phone_book::~Phone_book(void)
{
	return ;
}

void Phone_book::search_contact(void)
{
	int	i = 0;
	int j;
	int index = 0;
	int k = 0;
	if (this->search_count == 1)
		k = 8;
	else
		k = this->count;
	while (i < k)
	{
		j = 0;
		std::cout << "|";
		std::cout << std::setw(10) << std::right << i + 1<< "|";
		while (j < 3)
		{
			if (this->info[i][j].length() > 10)
			{
				std::cout << std::setw(9) << std::right << this->info[i][j].substr(0, 9);
				std::cout << ".";
			}
			else
				std::cout << std::setw(10) << std::right << this->info[i][j];
			j++;
			std::cout << "|";
		}
		i++;
		std::cout << std::endl;
	}
	std::cout << "Enter index: ";
	while (std::cin >> index)
	{
		if (isalpha(index) == 0 && index >= 1 && index <= 8)
			break;
		else
			std::cout << "Index could be >= 1 && <= 8, try again" << std::endl << "Enter index :";
	}
	std::cout << "First name: " << this->info[index - 1][0] << std::endl;
	std::cout << "Last name: " << this->info[index - 1][1] << std::endl;
	std::cout << "Nickname: " << this->info[index - 1][2] << std::endl;
	std::cout << "Phone number: " << this->info[index - 1][3] << std::endl;
	std::cout << "Darkest secret: " << this->info[index - 1][4] << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void Phone_book::add_contact(void)
{
	if (this->count == 8)
	{
		this->search_count = 1;
		this->count = 0;
	}
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->info[this->count][0]);
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->info[this->count][1]);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->info[this->count][2]);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->info[this->count][3]);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->info[this->count][4]);
	this->count++;
}