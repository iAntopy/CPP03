/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:34:21 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/18 19:51:39 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap	scav1;
	ScavTrap	scav2("Georgie");
	ScavTrap	scav3;

	scav3 = scav2;

	std::cout << "Default destructed scav1 tests : " << std::endl;
	for (int i=0; i < 52; i++)
		scav1.attack("Simbadboy");
	scav1.guardGate();
	scav1.beRepaired(1);
	scav1.takeDamage(20);

	std::cout << std::endl << "Params destructed scav2 tests : " << std::endl;
	for (int i=0; i < 5; i++)
		scav2.takeDamage(2);
	scav2.attack("Dingleberry");
	scav2.beRepaired(1);
	scav2.guardGate();

	
	std::cout << std::endl << "Copy destructed scav3 tests : " << std::endl;
	scav3.beRepaired(1);
	scav3.takeDamage(999);
	scav3.guardGate();
	scav3.attack("ZimZam-Flamakazam");
	scav3.beRepaired(1);

	return (0);
}
