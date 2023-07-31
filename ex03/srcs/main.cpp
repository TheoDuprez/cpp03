/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:13 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/31 19:10:29 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	monster("monster");
	

	std::cout << "-------------------------------------------------------------" << std::endl;
	monster.ScavTrap::attack("test");
	
	std::cout << "-------------------------------------------------------------" << std::endl;
	return (0);
}
