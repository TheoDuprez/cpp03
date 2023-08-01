/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:37:57 by tduprez           #+#    #+#             */
/*   Updated: 2023/08/01 16:45:33 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include <cstdlib>

FragTrap::FragTrap(void)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default ClatTrap constructor called !" << std::endl;
	return ;
}

FragTrap::FragTrap(const std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Name FragTrap constructor called !" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	std::cout << "Copy FragTrap constructor called !" << std::endl;
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_energyPoints = obj._energyPoints;
	this->_attackDamage = obj._attackDamage;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called !" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void) const
{
	std::string	userInput;
	std::cout << "Do you want do high five ?" << std::endl;
	while (true)
	{
		std::cout << "Y/n :" << std::endl;
		std::getline(std::cin, userInput);
		if (std::cin.eof() == true)
		{
			std::cout << "Error, an EOF was detected!" << std::endl;
			std::exit(1);
		}
		if (userInput != std::string("Y") && userInput != std::string("n"))
			continue ;
		else if (userInput == std::string("Y"))
		{
			std::cout << "High five ! 🙌" << std::endl;
			break ;
		}
		else
		{
			std::cout << "Ok, no high five..." << std::endl;
			break ;
		}
	}
}
