/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:34:21 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 17:48:24 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	scav1;
	ScavTrap	scav2("Georgie");
	ScavTrap	scav3;
	ScavTrap	scavDummy(scav2);
	
	scav3 = scav2;

	std::cout << "Default constructed scav1 tests : " << std::endl;
	for (int i=0; i < 52; i++)
		scav1.attack("Simbadboy");
	scav1.guardGate();
	scav1.beRepaired(1);
	scav1.takeDamage(20);
	scav1.beRepaired(20);

	std::cout << std::endl << "Params constructed scav2 tests : " << std::endl;
	for (int i=0; i < 5; i++)
		scav2.takeDamage(10);
	scav2.beRepaired(50);
	scav2.beRepaired(1);
	scav2.guardGate();
	scav2.guardGate();
	scav2.attack("Dingleberry");

	
	std::cout << std::endl << "Copy constructed scav3 tests : " << std::endl;
	scav3.beRepaired(1);
	scav3.takeDamage(999);
	scav3.guardGate();
	scav3.attack("ZimZam-Flamakazam");
	scav3.beRepaired(1);

	return (0);
}
