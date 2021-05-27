/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:39:19 by mroux             #+#    #+#             */
/*   Updated: 2021/05/27 23:18:33 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon():
	_name("Null weapon"), _damage(0), _APCost(0)
{
}

AWeapon::AWeapon(std::string const & name, int damage, int apcost):
	_name(name), _damage(damage), _APCost(apcost)
{

}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(AWeapon const& cl)
{
	operator=(cl);
}

AWeapon&			AWeapon::operator=(AWeapon const& cl)
{
	_name = cl._name;
	_damage = cl._damage;
	_APCost = cl._APCost;
	return (*this);
}

std::string const&	AWeapon::getName() const
{
	return _name;
}

int					AWeapon::getAPCost() const
{
	return _APCost;
}

int					AWeapon::getDamage() const
{
	return _damage;
}
