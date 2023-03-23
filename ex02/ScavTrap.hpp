/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:50:30 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 17:59:27 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

# include <iostream>
# include <fstream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool	_in_gatekeeper_mode;
		static const int	INIT_HP;
		static const int	INIT_EP;
		static const int	INIT_DMG;
		
	public:

		ScavTrap(void);
		ScavTrap(std::string const& name);
		ScavTrap(ScavTrap const& src);
		~ScavTrap();

		ScavTrap&	operator=(ScavTrap const& src);

		void    attack(std::string const& target);
		void	guardGate(void);
		bool	getGuardStatus(void) const;
};

std::ostream &			operator<<(std::ostream& o, ScavTrap const & i);

#endif
