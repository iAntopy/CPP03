/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:44:53 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 19:12:14 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string   _name;
		
	public:
		DiamondTrap(void);
		DiamondTrap(std::string const& name);
		DiamondTrap(DiamondTrap const& d);
		~DiamondTrap(void);
		DiamondTrap&	operator=(DiamondTrap const& src);

		std::string const&	getName(void) const;
		unsigned int		getHP(void) const;
		unsigned int		getEP(void) const;
		unsigned int		getDMG(void) const;
		
		using				ScavTrap::attack;
//		void 				attack(std::string const& target);
		void				whoAmI(void) const;
};

std::ostream&   operator<<(std::ostream& out, DiamondTrap const& c);

#endif