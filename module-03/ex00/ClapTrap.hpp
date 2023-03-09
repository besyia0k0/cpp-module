/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkong <hkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 22:05:51 by hkong             #+#    #+#             */
/*   Updated: 2023/03/09 22:08:10 by hkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private:

	public:
		ClapTrap();
		ClapTrap(const ClapTrap& clapTrap);
		ClapTrap& operator=(const ClapTrap &clapTrap);
		~ClapTrap();
};


#endif