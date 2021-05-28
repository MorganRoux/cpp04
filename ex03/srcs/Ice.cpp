/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:39:20 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 15:29:53 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():
	AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const& cl)
{
	operator=(cl);
}

Ice&		Ice::operator=(Ice const& cl)
{
	AMateria::operator=(cl);
	return (*this);
}

AMateria*		Ice::clone() const
{
	Ice*	i = new Ice(*this);
	return i;
}

void 		Ice::useImpl(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
