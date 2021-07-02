/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:07:05 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 11:52:31 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP
# include <iostream>
# include <string>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	public:
		Squad();
		virtual ~Squad();
		Squad(Squad const&);
		Squad&			operator=(Squad const&);

		int 			getCount() const;
		ISpaceMarine* 	getUnit(int) const;
		int 			push(ISpaceMarine*);

	protected:
		int				_count;
		ISpaceMarine**	_marines;

};

std::ostream&	operator<<(std::ostream& stream, Squad const& cl);

#endif
