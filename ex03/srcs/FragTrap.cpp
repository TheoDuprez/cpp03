/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:37:57 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/31 19:05:32 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
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
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_attackDamage = obj.getAttackDamage();
	this->_energyPoints = obj.getEnergyPoints();
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

unsigned int	FragTrap::getAttackDamage() const {
	return (this->_attackDamage);
}

unsigned int	FragTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	FragTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

std::string	FragTrap::getName(void) const
{
	return (this->_name);
}
