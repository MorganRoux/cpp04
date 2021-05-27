/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpions.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:43:36 by mroux             #+#    #+#             */
/*   Updated: 2021/05/27 23:45:35 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		RadScorpion();
		~RadScorpion();
		RadScorpion(RadScorpion const&);
		RadScorpion&	operator=(RadScorpion const&);

	protected:
};

#endif
