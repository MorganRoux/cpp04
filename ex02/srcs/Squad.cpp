/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:10:38 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 12:11:50 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad():
	_count(0), _marines(NULL)
{
}

Squad::~Squad()
{
	for (int i = 0; i < _count; i++)
		delete _marines[i];
}

Squad::Squad(Squad const& cl)
{
	_count = 0;
	_marines = NULL;
	operator=(cl);
}

Squad&	Squad::operator=(Squad const& cl)
{
	for (int i = 0; i < _count; i++)
		delete &(_marines[i]);
	_count = cl.getCount();
	_marines = new ISpaceMarine*[cl.getCount()];
	for (int i = 0; i < _count; i++)
		_marines[i] = cl.getUnit(i)->clone();
	return (*this);
}

void		Squad::display(std::ostream& stream) const
{
	stream << "Hello" << std::endl;
}

int 			Squad::getCount() const
{
	return _count;
}

ISpaceMarine* 	Squad::getUnit(int i) const
{
	return _marines[i];
}

int 			Squad::push(ISpaceMarine* s)
{
	ISpaceMarine**	temp;

	for (int i = 0; i < _count; i++)
	{
		if (s == _marines[i])
			return _count;
	}
	temp = _marines;
	_count++;
	_marines = new ISpaceMarine*[_count];
	for (int i = 0; i < _count - 1; i++)
		_marines[i] = temp[i];
	_marines[_count - 1] = s->clone();
	return _count;
}

std::ostream&	operator<<(std::ostream& stream, Squad const& cl)
{
	cl.display(stream);
	return (stream);
}
