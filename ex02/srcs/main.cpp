/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:13 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/30 17:20:54 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main(void)
{
	ScavTrap	terminator("terminator");
	FragTrap	frager("frager");
	

	std::cout << "-------------------------------------------------------------" << std::endl;
	terminator.attack("dog1");
	terminator.takeDamage(5);
	terminator.attack("dog2");
	terminator.takeDamage(4);
	terminator.beRepaired(10);
	terminator.attack("dog2");
	terminator.takeDamage(10);
	terminator.guardGate();
	terminator.attack("super dog");
	terminator.takeDamage(15000);
	terminator.attack("dog2");
	terminator.beRepaired(10);

	std::cout << "-------------------------------------------------------------" << std::endl;

	frager.attack("dog1");
	frager.takeDamage(5);
	frager.attack("dog2");
	frager.takeDamage(4);
	frager.beRepaired(10);
	frager.attack("dog2");
	frager.takeDamage(10);
	frager.highFivesGuys();
	frager.attack("super dog");
	frager.takeDamage(15000);
	frager.attack("dog2");
	frager.beRepaired(10);
	
	std::cout << "-------------------------------------------------------------" << std::endl;
	return (0);
}
