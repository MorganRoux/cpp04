/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:17:50 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 14:18:50 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():
	AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const& cl)
{
	operator=(cl);
}

Cure&		Cure::operator=(Cure const& cl)
{
	AMateria::operator=(cl);
}

AMateria*		Cure::clone() const
{
	Cure*	i = new Cure(*this);
	return i;
}

void 		Cure::useImpl(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
