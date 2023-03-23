/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:34:21 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/23 17:08:27 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	clap1;				// Testing default constructor
	ClapTrap	clap2("Georgie");	// Testing constructor with param
	ClapTrap	clap3;
	ClapTrap	clapDummy(clap2);	// Testing Copy constructor

	clap3 = clap2;					// Testing assignation operator

	std::cout << std::endl << "Drain clap1's energy by attacking enemy test (starting with " << clap1.getEP()  << " ep) : " << std::endl;
	for (int i=0; i < 12; i++)
		clap1.attack("Simbadboy");
	clap1.beRepaired(1);

	std::cout << std::endl << "Kill clap2 taking 2 damage points at a time (starting at " << clap2.getHP() << " hp): " << std::endl;
	for (int i=0; i < 7; i++)
		clap2.takeDamage(2);
	std::cout << "clap2 tries to attack after death :" << std::endl;
	clap2.attack("Dingleberry");
	std::cout << "clap2 tries to repair itself after death :" << std::endl;
	clap2.beRepaired(1);

	std::cout << std::endl << "Georgie's copy drains its energy by repairing itself : " << std::endl;
	for (int i=0; i < 12; i++)
	{
		clap3.beRepaired(1);
		clap3.takeDamage(1);
	}
		
	return (0);
}
