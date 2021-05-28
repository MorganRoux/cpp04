/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:55:00 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 15:05:03 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_mem[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_mem[i] != NULL)
		{
			delete _mem[i];
			_mem[i] = NULL;
		}
	}
}

MateriaSource::MateriaSource(MateriaSource const& cl)
{
	operator=(cl);
}

MateriaSource&		MateriaSource::operator=(MateriaSource const& cl)
{
	for (int i = 0; i < 4; i++)
	{
		if (_mem[i] != NULL)
		{
			delete _mem[i];
			_mem[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++)
		_mem[i] = (cl._mem[i] == NULL ? NULL : cl._mem[i]->clone());

	return (*this);
}

void				MateriaSource::display(std::ostream& stream) const
{
	stream << "Hello" << std::endl;
}

void 				MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_mem[i] != NULL)
		{
			_mem[i] = m->clone();
			break;
		}
	}
}

AMateria* 			MateriaSource::createMateria(std::string const& type)
{
	AMateria*	ret = NULL;

	for (int i = 0; i < 4; i++)
	{
		if (_mem[i]->getType() == type)
		{
			ret = _mem[i]->clone();
			break;
		}
	}
	return ret;
}

std::ostream&	operator<<(std::ostream& stream, MateriaSource const& cl)
{
	cl.display(stream);
	return (stream);
}
