/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:51:08 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 19:42:37 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const int	ScavTrap::INIT_HP = 100;
const int	ScavTrap::INIT_EP = 50;
const int	ScavTrap::INIT_DMG = 20;

std::ostream&   operator<<(std::ostream& out, ScavTrap const& c)
{
	out << "ScavTrap{";
	out << "name : " << c.getName();
	out << ", hp : " << c.getHP();
	out << ", ep : " << c.getEP();
	out << ", dmg : " << c.getDMG();
	out << ", is guarding : " << c.getGuardStatus();
	out << "} " << std::endl;
	return (out);
}
ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap default costructor called." << std::endl;
	_hp = ScavTrap::INIT_HP;
	_max_hp = _hp;
	_ep = ScavTrap::INIT_EP;
	_dmg = ScavTrap::INIT_DMG;
	_in_gatekeeper_mode = 0;
}
ScavTrap::ScavTrap(std::string const& name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called with name : " << name << std::endl;
	_hp = ScavTrap::INIT_HP;
	_max_hp = _hp;
	_ep = ScavTrap::INIT_EP;
	_dmg = ScavTrap::INIT_DMG;
	_in_gatekeeper_mode = 0;
}
ScavTrap::ScavTrap(ScavTrap const& other) : ClapTrap(other.getName()) {
	std::cout << "ScavTrap copy constructor called with : " << other << std::endl;
	_hp = other.getHP();
	_ep = other.getEP();
	_dmg = other.getDMG();
	_in_gatekeeper_mode = other.getGuardStatus();
}
ScavTrap&	ScavTrap::operator=(ScavTrap const& c){
	if (this == &c)
		return (*this);
	_name = c.getName();
	_hp = c.getHP();
	_ep = c.getEP();
	_dmg = c.getDMG();
	_in_gatekeeper_mode = c.getGuardStatus();
	std::cout << "ScavTrap copy assignment DONE!" << std::endl;
	return (*this);
}
ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called " << std::endl;
}

bool	ScavTrap::getGuardStatus(void) const {return (_in_gatekeeper_mode);}

void	ScavTrap::attack(std::string const& target) 
{
	if (this->isDead())
	{
		std::cout << "ScavTrap " << _name << " has transcended the need for physical violence. Although, haunting people has become a hobby." << std::endl;
		return ;
	}
	else if (_ep == 0)
	{
		std::cout << "ScavTrap " << _name << "'s spirit is down, but they shall never give up." << std::endl;
		return ;
	}
	_ep--;
	std::cout << "ScavTrap " << _name << " mauls " << target
		<< " causing " << _dmg << " points of dammage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->isDead())
	{
		std::cout << "While dead, ScavTrap " << _name << "'s limp, lifeless body lays in front of the gate. A band of rambunctious children come pick at the body with sticks and form lifelong memories." << std::endl;
		return ;
	}
	else if (_ep == 0)
	{
		std::cout << "Exhausted, ScavTrap " << _name << " walks towards the gate and gets knock down by a gust of wind. Having noticed the event, the local mailman laughs at the misfortune, then goes along with his day. " << _name << " was not present at the gate that day." << std::endl;
		return ;
	}
	else if (_in_gatekeeper_mode)
	{
		std::cout << _name << ", having already assumed the guarding postion at the gate, scratches their ass while continuing to scan for no good enemies." << std::endl;
		return ;
	}
	_in_gatekeeper_mode = 1;
	std::cout << "Scavtrap " << _name << " enters Gate Keeper mode. ";
	std::cout << "What the gate keeps is a mystery to " << _name << ", but they feel honored to have been chosen \
for this task." << std::endl;
}
