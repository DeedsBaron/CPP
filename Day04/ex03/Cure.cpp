#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const & ins) : AMateria(ins.getType())
{
    *this = ins;
}

Cure& Cure::operator=(Cure const & right)
{
	if (this == &right)
		return (*this);
    return (*this);
}

Cure::~Cure(void) {}

AMateria		*Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "\033[0;35m* heals " << target.getName() << " wounds *\033[m\n";
}

