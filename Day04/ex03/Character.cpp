#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) : _name()
{
	bzero(inv, sizeof(AMateria*) * 4);
}

Character::Character(std::string const name) : _name(name)
{
	bzero(inv, sizeof(AMateria*) * 4);
}

Character::Character(Character const& ins)
{
	bzero(inv, sizeof(AMateria*) * 4);
	*this = ins;
}

Character& Character::operator=(Character const& right)
{
	if (this == &right)
		return (*this);
	_name = right._name;
	del_mat_array(inv);
	for(int i = 0; i < 4; i++)
	{
		if (right.inv[i])
			inv[i] = right.inv[i]->clone();
	}
	return (*this);
}

Character::~Character(void)
{
	del_mat_array(inv);
}

const std::string&	Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria *m)
{
	static int i = 0;
	if (m && i < 4)
	{
		inv[i] = m;
		i++;
	}
	return ;
}

void	Character::unequip(int idx)
{
	inv[idx] = 0;
}

void 	Character::use(int idx, ICharacter& target)
{
	if (inv[idx])
	{
		std::cout << "\033[0;35mName:\t" << _name << std::endl;
		std::cout << "Adress of materia:\t" << inv[idx] << "\033[m\n";
		inv[idx]->use(target);
	}
}