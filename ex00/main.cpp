/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 01:34:21 by iamongeo          #+#    #+#             */
/*   Updated: 2023/03/18 17:55:24 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	clap1;
	ClapTrap	clap2("Georgie");
	ClapTrap	clap3;

	clap3 = clap2;

	for (int i=0; i < 12; i++)
		clap1.attack("Simbadboy");
	clap1.beRepaired(1);

	for (int i=0; i < 7; i++)
		clap2.takeDamage(2);
	clap2.attack("Dingleberry");
	clap2.beRepaired(1);


	std::cout << std::endl << "Georgie's copy tries to repair itself test : " << std::endl;
	clap3.beRepaired(1);
	return (0);
}
