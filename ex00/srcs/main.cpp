/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:13 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/30 16:53:18 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	cat("cat");

	cat.attack("dog1");
	cat.takeDamage(5);
	cat.attack("dog2");
	cat.takeDamage(4);
	cat.beRepaired(10);
	cat.attack("dog2");
	cat.takeDamage(10);
	cat.attack("super dog");
	cat.takeDamage(15000);
	cat.attack("dog2");
	cat.beRepaired(10);
	return (0);
}
