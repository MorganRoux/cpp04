/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 12:15:49 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 15:32:38 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(AMateria const&);

		AMateria&			operator=(AMateria const&);
		virtual void		display(std::ostream& stream) const;
		virtual AMateria 	*clone() const = 0;
		void 				use(ICharacter &target);
		std::string const 	&getType() const; 		//Returns the materia type
		unsigned int 		getXP() const;			//Returns the Materia's XP

	protected:
		AMateria();
		virtual void		useImpl(ICharacter &target);
		std::string			_type;
		unsigned int		_xp;
};

std::ostream&	operator<<(std::ostream& stream, AMateria const& cl);

#endif
