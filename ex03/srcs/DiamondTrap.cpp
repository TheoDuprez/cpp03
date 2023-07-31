/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:37:57 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/31 19:07:08 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 150;
	this->FragTrap::_attackDamage = 1000;
	std::cout << "Default ClatTrap constructor called !" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	this->_name = name;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 150;
	this->FragTrap::_attackDamage = 1000;
	std::cout << "Name DiamondTrap constructor called !" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
	std::cout << "Copy DiamondTrap constructor called !" << std::endl;
	this->_name = obj.getName();
	this->FragTrap::_hitPoints = obj.FragTrap::_hitPoints;
	this->ScavTrap::_energyPoints = obj.ScavTrap::_energyPoints;
	this->FragTrap::_attackDamage = obj.FragTrap::_attackDamage;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called !" << std::endl;
	return ;
}

std::string		DiamondTrap::getName(void) const
{
	return (this->_name);
}
