/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:50:30 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 17:49:15 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FragTrap_HPP__
# define __FragTrap_HPP__

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		static const int	INIT_HP;
		static const int	INIT_EP;
		static const int	INIT_DMG;
		
	public:

		FragTrap(void);
		FragTrap(std::string const& name);
		FragTrap(FragTrap const& src);
		~FragTrap();

		FragTrap&	operator=(FragTrap const& src);

		void	highFivesGuys(void);
};

std::ostream&	operator<<(std::ostream& o, FragTrap const& i);

#endif
