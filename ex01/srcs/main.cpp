/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:13 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/01 16:26:40 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ScavTrap	terminator("terminator");
	ClapTrap	dog("dog");

	dog.setAttackDamage(3);
	dog.attack(terminator.getName());
	terminator.takeDamage(dog.getAttackDamage());
	terminator.beRepaired(10);
	terminator.attack(dog.getName());
	dog.takeDamage(terminator.getAttackDamage());
	dog.attack(terminator.getName());
	dog.beRepaired(10);

	terminator.guardGate();

	return (0);
}
