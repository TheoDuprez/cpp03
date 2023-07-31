/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:37:57 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/30 17:33:24 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Default ClatTrap constructor called !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Name ScavTrap constructor called !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	std::cout << "Copy ScavTrap constructor called !" << std::endl;
	this->_name = obj._name;
	this->_hitPoints = obj._hitPoints;
	this->_attackDamage = obj._attackDamage;
	this->_energyPoints = obj._energyPoints;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called !" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << this->_name << " is in Gate keeper mod !" << std::endl;
	return ;
}
