/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigWeapon.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:09:31 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 11:58:19 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BigWeapon.hpp"

BigWeapon::BigWeapon(): AWeapon("Big Weapon", 21, 5)
{
}

BigWeapon::~BigWeapon()
{
}

BigWeapon::BigWeapon(BigWeapon const& cl)
{
	operator=(cl);
}

BigWeapon&	BigWeapon::operator=(BigWeapon const& cl)
{
	AWeapon::operator=(cl);
	return (*this);
}

void			BigWeapon::attack() const
{
	std::cout << "* blaaa blaaa brrraaaa *" << std::endl;
}
