#pragma once

#include <iostream>
#include <string>

class ICharacter;

class AMateria{
protected:
    std::string _type;
public:
	AMateria(const std::string& type);
    virtual ~AMateria(void);

    const std::string&		getType() const;
    virtual AMateria*		clone() const = 0;
    virtual void			use(ICharacter& target);
};

void 	del_mat_array(AMateria* array[]);