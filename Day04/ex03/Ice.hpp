#pragma once

#include "AMateria.hpp"

class Ice : public AMateria{
public:
    Ice(void);
    Ice(const Ice& ins);
    Ice&	operator=(const Ice& right);
    ~Ice(void);

    AMateria*   clone() const;
    void 		use(ICharacter& target);
};