#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
private:
	std::string				_name;
	AMateria*				inv[4];
public:
	Character(void);
	Character(const std::string name);
	Character(const Character& ins);
	Character&	operator=(const Character& right);
	~Character(void);

	const std::string&		getName() const;
	void					equip(AMateria* m);
	void					unequip(int idx);
	void					use(int idx, ICharacter& target);
};