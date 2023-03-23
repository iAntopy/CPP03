/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:34:21 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/22 23:17:59 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
//#include "DiamondTrap.hpp"

void    run_claptrap_tests(void)
{
	std::cout << "/*----------------------------------------------------------------------*\\" << std::endl;
	std::cout << "STARTING WITH CLAPTRAP TESTS : " << std::endl;
	ClapTrap	clap1;				// Testing default constructor
	ClapTrap	clap2("Georgie");	// Testing constructor with param
	ClapTrap	clap3;
	ClapTrap	clapDummy(clap2);	// Testing Copy constructor

	clap3 = clap2;					// Testing assignation operator

	for (int i=0; i < 12; i++)
		clap1.attack("Simbadboy");
	clap1.beRepaired(1);

	for (int i=0; i < 7; i++)
		clap2.takeDamage(2);
	std::cout << "clap2 tries to attack after death :" << std::endl;
	clap2.attack("Dingleberry");
	std::cout << "clap2 tries to repaire itself after death :" << std::endl;
	clap2.beRepaired(1);

	std::cout << std::endl << "Georgie's copy drains its energy by repairing itself : " << std::endl;
	for (int i=0; i < 12; i++)
		clap3.beRepaired(1);
}

void    run_scavtrap_tests(void)
{
	std::cout << "/*----------------------------------------------------------------------*\\" << std::endl;
	std::cout << std::endl << std::endl <<"STARTING WITH SCAVTRAP TESTS : " << std::endl;

	ScavTrap	scav1;
	ScavTrap	scav2("Gimbly");
	ScavTrap	scav3;
	ScavTrap	scavDummy(scav2);

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
	scav2.guardGate();

	std::cout << std::endl << "Copy constructed scav3 tests : " << std::endl;
	scav3.beRepaired(1);
	scav3.takeDamage(999);
	scav3.guardGate();
	scav3.attack("ZimZam-Flamakazam");
	scav3.beRepaired(1);
}

void    run_fragtrap_tests(void)
{
	std::cout << "/*----------------------------------------------------------------------*\\" << std::endl;
	std::cout << std::endl << std::endl << "STARTING WITH FRAGTRAP : " << std::endl;
	
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
}

void    run_diamondtrap_tests(void)
{
	std::cout << "/*----------------------------------------------------------------------*\\" << std::endl;
	std::cout << std::endl << std::endl << "STARTING WITH DIAMONDTRAP TESTS : " << std::endl;
	
	DiamondTrap	dim1;
	DiamondTrap	dim2("Winchester");
	DiamondTrap	dim3;
	dim3 = dim2;

	std::cout << "Default constructed dim1 tests : " << std::endl;
	for (int i=0; i < 52; i++)
		dim1.attack("Jimothy");
	dim1.highFivesGuys();
	dim1.beRepaired(1);
	dim1.takeDamage(20);

	std::cout << std::endl << "Params constructed dim2 tests : " << std::endl;
	for (int i=0; i < 5; i++)
		dim2.takeDamage(2);
	dim2.attack("Dingleberry");
	dim2.beRepaired(1);
	dim2.highFivesGuys();
	dim2.guardGate();
	dim2.guardGate();

	std::cout << std::endl << "Copy constructed dim3 tests : " << std::endl;
	dim3.beRepaired(1);
	dim3.takeDamage(999);
	dim3.highFivesGuys();
	dim3.guardGate();
	dim3.guardGate();
	dim3.attack("ZimZam-Flamakazam");
	dim3.beRepaired(1);
	dim1.whoAmI();
	dim2.whoAmI();
	dim3.whoAmI();
}

int main(void)
{
	run_claptrap_tests();
	run_scavtrap_tests();
	run_fragtrap_tests();
	run_diamondtrap_tests();
/*
	for (int i=0; i < 5; i++)
		d1.attack("Simbadboy");

	d2.attack("Dingleberry");
	d1.beRepaired(1);
	d2.beRepaired(1);
	d3.beRepaired(1);

	clap1.guardGate();
	clap2.guardGate();
	clap3.takeDamage(999);
	clap3.guardGate();



	DiamondTrap    frag1;
	DiamondTrap    frag2("Bango");
	DiamondTrap    frag3;
	frag3 = frag2;

	frag1.attack("Jimothy");
	frag2.takeDamage(999);
	for (int i=0; i < 102; i++)
		frag3.attack("Mambossa");
	
	frag1.highFivesGuys();
	frag2.highFivesGuys();
	frag3.highFivesGuys();
*/
	return (0);
}
