/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:08:10 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/22 23:12:52 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

std::ostream&   operator<<(std::ostream& out, DiamondTrap const& c)
{
	out << "DiamondTrap{";
	out << " name : " << c.getName();
	out << ", hp : " << c.getHP();
	out << ", ep : " << c.getEP();
	out << ", dmg : " << c.getDMG();
	out << " } ";
	return (out);
}

DiamondTrap::DiamondTrap(void) {
    std::cout << "DiamondTrap default costructor called." << std::endl;
    _name = "DEFAULT";
	this->ClapTrap::_name += "_clap_trap";
	_hp = FragTrap::INIT_HP;
	_ep = ScavTrap::INIT_EP;
	_dmg = FragTrap::INIT_DMG;
}
DiamondTrap::DiamondTrap(std::string const& name) : ClapTrap(name + "_clap_trap") {
	std::cout << "DiamondTrap constructor called with name : " << name << std::endl;
    _name = name;
	_hp = FragTrap::INIT_HP;
	_ep = ScavTrap::INIT_EP;
	_dmg = FragTrap::INIT_DMG;
}

DiamondTrap::DiamondTrap(DiamondTrap const& d){
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	_name = d.getName();
	_hp = d.getHP();
	_ep = d.getEP();
	_dmg = d.getDMG();
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& d){
	if (this == &d)
		return (*this);
	_name = d.getName();
	this->ClapTrap::_name = _name + "_clap_trap";
	_hp = d.getHP();
	_ep = d.getEP();
	_dmg = d.getDMG();
	std::cout << "Copy assignment DONE!" << std::endl;
	return (*this);
}

std::string const&	DiamondTrap::getName(void) const {return (_name);}
unsigned int		DiamondTrap::getHP(void) const {return (_hp);}
unsigned int		DiamondTrap::getEP(void) const {return (_ep);}
unsigned int		DiamondTrap::getDMG(void) const {return (_dmg);}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called " << std::endl;
}

void    DiamondTrap::whoAmI(void) const
{
    std::cout << "DiamondTrap wonders about his identity : " << this->_name << " / " << this->ClapTrap::_name << std::endl;
}
