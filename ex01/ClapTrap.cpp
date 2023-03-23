/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 00:22:46 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 17:45:53 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const int	ClapTrap::INIT_HP = 10;
const int	ClapTrap::INIT_EP = 10;
const int	ClapTrap::INIT_DMG = 0;

std::ostream&   operator<<(std::ostream& out, ClapTrap const& c)
{
	out << "ClapTrap{";
	out << "name : " << c.getName();
	out << ", hp : " << c.getHP();
	out << ", ep : " << c.getEP();
	out << ", dmg : " << c.getDMG();
	out << "} ";
	return (out);
}

ClapTrap::ClapTrap(void) : _name("DEFAULT"), _hp(ClapTrap::INIT_HP), _max_hp(ClapTrap::INIT_HP), _ep(ClapTrap::INIT_EP), _dmg(ClapTrap::INIT_DMG) {
	std::cout << "ClapTrap default costructor called." << std::endl;
}
ClapTrap::ClapTrap(std::string const& name) : _name(name), _hp(ClapTrap::INIT_HP),
	_max_hp(ClapTrap::INIT_HP), _ep(ClapTrap::INIT_EP), _dmg(ClapTrap::INIT_DMG) {
	std::cout << "ClapTrap constructor called with name : " << name << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const& other) : _name(other.getName()),
	_hp(other.getHP()), _max_hp(ClapTrap::INIT_HP), _ep(other.getEP()), _dmg(other.getDMG()) {
	std::cout << "ClapTrap copy constructor called with other : " << other << std::endl;
}
ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called " << std::endl;
}
ClapTrap&	ClapTrap::operator=(ClapTrap const& c){
	if (this == &c)
		return (*this);
	_name = c.getName();
	_hp = c.getHP();
	_ep = c.getEP();
	_dmg = c.getDMG();
	std::cout << "Copy assignment DONE!" << std::endl;
	return (*this);
}

std::string const&	ClapTrap::getName(void) const {return (_name);}
unsigned int		ClapTrap::getHP(void) const {return (_hp);}
unsigned int		ClapTrap::getEP(void) const {return (_ep);}
unsigned int		ClapTrap::getDMG(void) const {return (_dmg);}

bool	ClapTrap::isDead(void) const {return (_hp == 0);}

void    ClapTrap::attack(std::string const& target)
{
	if (this->isDead())
	{
		std::cout << _name << " has a hard time clapping his enemies while dead..." << std::endl;
		return ;
	}
	else if (_ep <= 0)
	{
		std::cout << _name << " is too tired to fight. They squeek their old hinges and ask their opponents for a timeout. What a shame." << std::endl;
		return ;
	}
	_ep--;
	std::cout << "Claptrap " << _name << " attacks " << target
		<< " causing " << _dmg << " points of dammage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (this->isDead())
	{
		std::cout << "No point in beating a dead trap. " << _name << " is already dead." << std::endl;
		return ;
	}
	if (amount >= _hp)
	{
		_hp = 0;
		std::cout << _name << " received " << amount << " points of damage, dies and brings shame to its family." << std::endl;
	}
	else
	{
		_hp -= amount;
		std::cout << _name << " receives " << amount << " points of damage ( " << this->_hp << " HP left ) and laughs at his opponent's weakness." << std::endl;
	}
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->isDead())
	{
		std::cout << "Maggots have already consumed " << _name << "'s frame. I'm afraid repairs are not an option." << std::endl;
		return ;
	}
	else if (_ep <= 0)
	{
		std::cout << _name << " is too tired to help himself. REPAIRMAN !" << std::endl;
		return ;
	}
	if (_hp < _max_hp)
	{
		_hp += amount;
		_ep--;
		std::cout << _name << " repairs itself and gains " << amount
			<< " HP. Current HP : " << _hp << std::endl;
	}
	else
		std::cout << _name << " tries to repair itself, but is already at FULL health." << std::endl;
}
