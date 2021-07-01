/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:56:26 by mroux             #+#    #+#             */
/*   Updated: 2021/07/01 13:12:58 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():
	_name("unknown"), _ap(0), _weapon(NULL)
{
}

Character::Character(std::string const& name):
	_name(name), _ap(40), _weapon(NULL)
{
}

Character::~Character()
{
}

Character::Character(Character const& cl)
{
	operator=(cl);
}

Character&			Character::operator=(Character const& cl)
{
	_name = cl._name;
	_ap = cl._ap;
	_weapon = cl._weapon;
	return (*this);
}

std::ostream&	operator<<(std::ostream& stream, Character const& cl)
{
	stream << cl.getName() << " has " << cl.getAP() << " AP and " << (cl.getWeapon() == NULL ? "is unarmed." : "wields a " + cl.getWeapon()->getName() + ".") << std::endl;
	return (stream);
}

void 				Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}
void 				Character::equip(AWeapon* w)
{
	_weapon = w;
}

void 				Character::attack(Enemy*& e)
{
	if (_weapon == NULL || _ap < _weapon->getAPCost())
		return;
	_ap -= _weapon->getAPCost();
	std::cout << _name << " attacks "<< e->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	e->takeDamage(_weapon->getDamage());
	if (e->getHP() == 0)
	{
		delete e;
		e = NULL;
	}
}

std::string const&	Character::getName() const
{
	return _name;
}


int const&			Character::getAP() const
{
	return (_ap);
}

const AWeapon*		Character::getWeapon() const
{
	return (_weapon);
}
