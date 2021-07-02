/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BadVilain.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 23:35:37 by mroux             #+#    #+#             */
/*   Updated: 2021/07/02 12:28:04 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BADVILAIN_HPP
# define BADVILAIN_HPP
# include <iostream>
# include <string>
# include "Enemy.hpp"

class BadVilain : public Enemy
{
	public:
		BadVilain();
		virtual ~BadVilain();
		BadVilain(BadVilain const&);
		BadVilain&	operator=(BadVilain const&);

	protected:
};

#endif
