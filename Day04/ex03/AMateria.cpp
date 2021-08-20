#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : _type(type) {}

AMateria::~AMateria(void) {}

std::string const &     AMateria::getType() const
{
	return (_type);
}

void 	del_mat_array(AMateria* array[])
{
	for(int i = 0; i < 4; i++)
	{
		if (array[i])
			delete(array[i]);
	}
}

void 	AMateria::use(ICharacter& target) {}