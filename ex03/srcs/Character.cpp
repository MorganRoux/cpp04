/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:29:13 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 09:34:35 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("No name")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;

	std::cout << "Hey I'm " << _name << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}

}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;

	std::cout << "Hey I'm " << _name << std::endl;
}

Character::Character(Character const& cl)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	operator=(cl);
}

Character&			Character::operator=(Character const& cl)
{
	_name = cl.getName();
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
		{
			delete _inventory[i];
			_inventory[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
		_inventory[i] = (cl._inventory[i] == NULL ? NULL : cl._inventory[i]->clone());
	return (*this);
}

std::string const&	Character::getName() const
{
	return _name;
}

void				Character::equip(AMateria *m)
{
	int i;

	if (m == NULL)
		return;
	for (i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << _name << " equipped with " << m->getType() << std::endl;
			break;
		}
	}
	if (i == 4)
		std::cout << _name << " equipement is full" << std::endl;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || _inventory[idx] == NULL)
		return;
	_inventory[idx]->use(target);
}
