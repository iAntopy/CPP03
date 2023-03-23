/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 02:51:08 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 18:39:42 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const int	FragTrap::INIT_HP = 100;
const int	FragTrap::INIT_EP = 100;
const int	FragTrap::INIT_DMG = 30;

std::ostream&   operator<<(std::ostream& out, FragTrap const& c)
{
	out << "FragTrap{";
	out << "name : " << c.getName();
	out << ", hp : " << c.getHP();
	out << ", ep : " << c.getEP();
	out << ", dmg : " << c.getDMG();
	out << "} " << std::endl;
	return (out);
}

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap default costructor called." << std::endl;
	_hp = FragTrap::INIT_HP;
	_max_hp = _hp;
	_ep = FragTrap::INIT_EP;
	_dmg = FragTrap::INIT_DMG;
}
FragTrap::FragTrap(std::string const& name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called with name : " << name << std::endl;
	_hp = FragTrap::INIT_HP;
	_max_hp = _hp;
	_ep = FragTrap::INIT_EP;
	_dmg = FragTrap::INIT_DMG;
}
FragTrap::FragTrap(FragTrap const& other) : ClapTrap(other.getName()) {
	std::cout << "FragTrap copy constructor called with : " << other << std::endl;
	_hp = other.getHP();
	_max_hp = _hp;
	_ep = other.getEP();
	_dmg = other.getDMG();
}
FragTrap&	FragTrap::operator=(FragTrap const& c){
	if (this == &c)
		return (*this);
	_name = c.getName();
	_hp = c.getHP();
	_ep = c.getEP();
	_dmg = c.getDMG();
	std::cout << "Copy assignment DONE!" << std::endl;
	return (*this);
}
FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called " << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->isDead())
	{
		std::cout << "After " << _name << "'s death, rigor mortis has set in and has made their stiffened arm look as if asking for a high five. Local children have instead taken the opportunity to draw an offensive caricature of one of their dads on the hand. The children are now in jail." << std::endl;
		return ;
	}
	else if (_ep == 0)
	{
		std::cout << _name << ", hanging out with friends, asks for a round of high fives. Their enthusiastic friends raise their arms ready for the celebration. Tragically, while trying to raise their own arm, " << _name << " remembers they are too tired to raise their arm. Too ashamed to admit they cannot possibly fulfill this social contract they brought about themselves, " << _name << " settled on creating a little subterfuge. \"Hey look, isn't that Billy Mays, the FlexTape(tm) guy, overthere\" they exclamed while looking at a distant crowd of tourists. The group of friends now looking for their idol, " << _name << " takes whatever energy they have left to hop on the back of a passing juggling monocyclist and escape this unfortunate situation unnoticed. HOORAY " << _name << " WINS !" << std::endl;
		return ;
	}
//	std::cout << _name << " raises their arm and calls for a high five while at a fellow FragTrap's funeral. The deceased's family is not amused." << std::endl;
	std::cout << _name << " raises their arm to join a friend in a joyious celebratory hand clap." << std::endl;
}
