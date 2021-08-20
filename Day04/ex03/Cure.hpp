#pragma once

#include "AMateria.hpp"

class Cure : public AMateria{
public:
    Cure(void);
    Cure(const Cure& ins);
    Cure&    operator=(const Cure& right);
    ~Cure(void);

    AMateria*   clone() const;
    void 		use(ICharacter& target);
};