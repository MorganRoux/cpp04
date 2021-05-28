/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 14:52:07 by mroux             #+#    #+#             */
/*   Updated: 2021/05/28 15:08:44 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIALSOURCE_HPP
# define MATERIALSOURCE_HPP
# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource const&);
		MateriaSource&		operator=(MateriaSource const&);
		void				display(std::ostream& stream) const;
		void 				learnMateria(AMateria*);
		AMateria* 			createMateria(std::string const & type);

	protected:
		AMateria*			_mem[4];
};

std::ostream&	operator<<(std::ostream& stream, MateriaSource const& cl);

#endif
