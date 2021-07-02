/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 22:58:03 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 11:57:33 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		virtual ~PlasmaRifle();
		PlasmaRifle(PlasmaRifle const&);
		PlasmaRifle&	operator=(PlasmaRifle const&);
		void			attack() const;

	protected:
};

#endif
