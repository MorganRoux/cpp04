/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpions.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:44:22 by mroux             #+#    #+#             */
/*   Updated: 2021/05/27 23:45:23 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion():
	Enemy("RadScorpion", 80)
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const& cl)
{
	operator=(cl);
}

RadScorpion&	RadScorpion::operator=(RadScorpion const& cl)
{
	Enemy::operator=(cl);
	return (*this);
}

// void			RadScorpion::takeDamage(int damage)
// {
// 	Enemy::takeDamage(damage);
// }
