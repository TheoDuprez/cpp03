/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:13 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/30 16:35:08 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ScavTrap	terminator("terminator");

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
	return (0);
}
