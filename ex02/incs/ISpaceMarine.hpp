/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 10:59:20 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 11:01:37 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP
# include <iostream>
# include <string>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine 	*clone() const = 0;
		virtual void 			battleCry() const = 0;
		virtual void 			rangedAttack() const = 0;
		virtual void 			meleeAttack() const = 0;
};

#endif
