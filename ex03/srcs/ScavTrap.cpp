/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:37:57 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/31 19:02:24 by tduprez          ###   ########lyon.fr   */
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
	this->_name = obj.getName();
	this->_hitPoints = obj.getHitPoints();
	this->_attackDamage = obj.getAttackDamage();
	this->_energyPoints = obj.getEnergyPoints();
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

unsigned int	ScavTrap::getAttackDamage() const {
	return (this->_attackDamage);
}

unsigned int	ScavTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	ScavTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

std::string	ScavTrap::getName(void) const
{
	return (this->_name);
}
