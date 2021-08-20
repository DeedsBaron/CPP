#include "Ice.hpp"
#include "Character.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const & ins) : AMateria(ins.getType())
{
    *this = ins;
}

Ice& Ice::operator=(Ice const & right)
{
	if (this == &right)
		return (*this);
    return (*this);
}

Ice::~Ice(void) {}

AMateria		*Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "\033[0;36m* shoots an ice bolt at " << target.getName() << " *\033[m\n";
}

