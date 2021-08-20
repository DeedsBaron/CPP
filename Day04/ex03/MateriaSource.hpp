#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource{
private:
    AMateria* source[4];
public:
    MateriaSource(void);
    MateriaSource(const MateriaSource& ins);
    MateriaSource&  operator=(const MateriaSource& right);
	~MateriaSource(void);

    void			learnMateria(AMateria* materia);
    AMateria*		createMateria(const std::string& type);
};