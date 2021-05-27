/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:21:57 by mroux             #+#    #+#             */
/*   Updated: 2021/05/27 23:22:46 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("PowerFist", 50, 8)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(PowerFist const& cl)
{
	operator=(cl);
}

PowerFist&	PowerFist::operator=(PowerFist const& cl)
{
	AWeapon::operator=(cl);
	return (*this);
}

void			PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
