/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 11:48:35 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 11:57:14 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine();
		~TacticalMarine();
		TacticalMarine(TacticalMarine const&);
		TacticalMarine&	operator=(TacticalMarine const&);
		void			display(std::ostream& stream) const;
		ISpaceMarine 	*clone() const;
		void 			battleCry() const;
		void 			rangedAttack() const;
		void 			meleeAttack() const;

	protected:
};

std::ostream&	operator<<(std::ostream& stream, TacticalMarine const& cl);

#endif
