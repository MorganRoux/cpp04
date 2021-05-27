/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:28:15 by mroux             #+#    #+#             */
/*   Updated: 2021/05/27 23:34:08 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy():
	_type("No Type"), _hp(0)
{
}

Enemy::Enemy(std::string const& type, int hp):
	_type(type), _hp(hp)
{
}

Enemy::~Enemy()
{
}

Enemy::Enemy(Enemy const& cl)
{
	operator=(cl);
}

Enemy&				Enemy::operator=(Enemy const& cl)
{
	_type = cl._type;
	_hp = cl._hp;
	return (*this);
}

std::string const&	Enemy::getType() const
{
	return _type;
}

int					Enemy::getHP() const
{
	return _hp;
}

void				Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	_hp -= damage;
	if (_hp < 0)
		_hp = 0;
}
