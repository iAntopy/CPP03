/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:34:21 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/18 20:02:27 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap	scav1;
	ScavTrap	scav2("Georgie");
	ScavTrap	scav3;

	scav3 = scav2;

	std::cout << "Default constructed scav1 tests : " << std::endl;
	for (int i=0; i < 5; i++)
		scav1.attack("Simbadboy");
	scav1.guardGate();
	scav1.beRepaired(1);
	scav1.takeDamage(20);

	std::cout << std::endl << "Params constructed scav2 tests : " << std::endl;
	for (int i=0; i < 5; i++)
		scav2.takeDamage(2);
	scav2.attack("Dingleberry");
	scav2.beRepaired(1);
	scav2.guardGate();

	std::cout << std::endl << "Copy constructed scav3 tests : " << std::endl;
	scav3.beRepaired(1);
	scav3.takeDamage(999);
	scav3.guardGate();
	scav3.attack("ZimZam-Flamakazam");
	scav3.beRepaired(1);



	FragTrap	frag1;
	FragTrap	frag2("Bango");
	FragTrap	frag3;
	frag3 = frag2;

	std::cout << "Default constructed frag1 tests : " << std::endl;
	for (int i=0; i < 102; i++)
		frag1.attack("Jimothy");
	frag1.highFivesGuys();
	frag1.beRepaired(1);
	frag1.takeDamage(20);

	std::cout << std::endl << "Params constructed frag2 tests : " << std::endl;
	for (int i=0; i < 5; i++)
		frag2.takeDamage(2);
	frag2.attack("Dingleberry");
	frag2.beRepaired(1);
	frag2.highFivesGuys();

	std::cout << std::endl << "Copy constructed frag3 tests : " << std::endl;
	frag3.beRepaired(1);
	frag3.takeDamage(999);
	frag3.highFivesGuys();
	frag3.attack("ZimZam-Flamakazam");
	frag3.beRepaired(1);

	return (0);
}
