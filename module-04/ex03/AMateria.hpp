/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:33:23 by hkong             #+#    #+#             */
/*   Updated: 2023/04/01 17:06:13 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMETERIA_HPP
# define AMETERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria {
	protected:
		std::string	type;

	public:
		AMateria(std::string const& type);

		std::string const& getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void	use(ICharacter& target);
};

#endif