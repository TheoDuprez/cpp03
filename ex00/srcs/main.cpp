/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:13 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/01 16:15:54 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	cat("cat");
	ClapTrap	dog("dog");

	dog.setAttackDamage(3);

	cat.attack(dog.getName());
	dog.takeDamage(cat.getAttackDamage());

	dog.attack(cat.getName());
	cat.takeDamage(dog.getAttackDamage());

	cat.beRepaired(1000);

	dog.attack(cat.getName());
	cat.takeDamage(dog.getAttackDamage());
	dog.attack(cat.getName());
	cat.takeDamage(dog.getAttackDamage());
	dog.attack(cat.getName());
	cat.takeDamage(dog.getAttackDamage());
	dog.attack(cat.getName());
	cat.takeDamage(dog.getAttackDamage());

	dog.setAttackDamage(15000);
	dog.attack(cat.getName());
	cat.takeDamage(dog.getAttackDamage());
	cat.attack(dog.getName());
	cat.beRepaired(10);
	return (0);
}
