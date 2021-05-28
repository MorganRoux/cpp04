/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:22:07 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 15:32:34 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():
	_type("No Type"), _xp(0)
{
}

AMateria::AMateria(std::string const &type):
	_type(type), _xp(0)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const& cl)
{
	operator=(cl);
}

AMateria&			AMateria::operator=(AMateria const& cl)
{
	_type = cl._type;
	_xp = cl._xp;
	return (*this);
}

void				AMateria::display(std::ostream& stream) const
{
	stream << "Hello" << std::endl;
}

void 				AMateria::use(ICharacter &target)
{
	_xp += 10;
	useImpl(target);
}

void				AMateria::useImpl(ICharacter &target)
{
	(void)target;
}

std::string const& 	AMateria::getType() const
{
	return _type;
}

unsigned int 		AMateria::getXP() const
{
	return _xp;
}

std::ostream&	operator<<(std::ostream& stream, AMateria const& cl)
{
	cl.display(stream);
	return (stream);
}
