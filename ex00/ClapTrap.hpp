/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 00:13:40 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/22 22:21:24 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <iostream>
# include <fstream>
# include <string>

class ClapTrap
{
	private:
		std::string 	_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_dmg;

	public:
		ClapTrap(void);
		ClapTrap(std::string const& name);
		ClapTrap(ClapTrap const& other);
		~ClapTrap(void);
		ClapTrap&   operator=(ClapTrap const& other);

		void    attack(std::string const& target);
		void    takeDamage(unsigned int amount);
		void    beRepaired(unsigned int amount);
		
		std::string const&	getName(void) const;
		unsigned int		getHP(void) const;
		unsigned int		getEP(void) const;
		unsigned int		getDMG(void) const;
		bool				isDead(void) const;
};

std::ostream&	operator<<(std::ostream& o, ClapTrap const& c);

#endif
