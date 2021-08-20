#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource(void)
{
	bzero(source, sizeof(AMateria*) * 4);
}

MateriaSource::MateriaSource(MateriaSource const& ins)
{
	*this = ins;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& right)
{
	if (this == &right)
		return (*this);
	del_mat_array(source);
	for(int i = 0; i < 4; i++)
		source[i] = right.source[i];
	return (*this);
}

void        MateriaSource::learnMateria(AMateria* materia)
{
    static int i = 0;
    if (i == 4)
    {
        std::cout << "Source is full\n";
        return ;
    }
    source[i] = materia;
    i++;
}

MateriaSource::~MateriaSource(void)
{
	del_mat_array(source);
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
    	if (source[i])
    	{
			if (source[i]->getType().compare(type) == 0)
				return (source[i]->clone());
		}
    }
    return (0);
}


