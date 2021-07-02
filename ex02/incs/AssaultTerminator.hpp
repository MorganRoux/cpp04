/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:59:08 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 11:52:16 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		virtual ~AssaultTerminator();
		AssaultTerminator(AssaultTerminator const&);
		AssaultTerminator&	operator=(AssaultTerminator const&);
		void			display(std::ostream& stream) const;
		ISpaceMarine 	*clone() const;
		void 			battleCry() const;
		void 			rangedAttack() const;
		void 			meleeAttack() const;

	protected:
};

std::ostream&	operator<<(std::ostream& stream, AssaultTerminator const& cl);

#endif
