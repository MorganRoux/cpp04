/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BadVilain.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:44:22 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 12:26:03 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BadVilain.hpp"

BadVilain::BadVilain():
	Enemy("BadVilain", 80)
{
	std::cout << "* Mwouahaha *" << std::endl;
}

BadVilain::~BadVilain()
{
	std::cout << "* Mwouhihi *" << std::endl;
}

BadVilain::BadVilain(BadVilain const& cl)
{
	operator=(cl);
}

BadVilain&	BadVilain::operator=(BadVilain const& cl)
{
	Enemy::operator=(cl);
	return (*this);
}

// void			BadVilain::takeDamage(int damage)
// {
// 	Enemy::takeDamage(damage);
// }
