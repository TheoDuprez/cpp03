/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:13 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/30 18:09:54 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	monster("monster");
	

	std::cout << "-------------------------------------------------------------" << std::endl;
	monster.attack("test");
	
	std::cout << "-------------------------------------------------------------" << std::endl;
	return (0);
}
