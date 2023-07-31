/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:37:57 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/30 17:30:47 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void): _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClatTrap constructor called !" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Name ClapTrap constructor called !" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap& obj): _name(obj._name), _hitPoints(obj._hitPoints), _energyPoints(obj._energyPoints), _attackDamage(obj._attackDamage)
{
	std::cout << "Copy ClapTrap constructor called !" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called !" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
	else
	{
		if (this->_hitPoints == 0)
			std::cout << "Oh no! " << this->_name << " can't attack ! Is dead !" << std::endl;
		else if (this->_energyPoints == 0)
			std::cout << "Oh no! " << this->_name << " can't attack ! Too few energy points !" << std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap" << this->_name << " can't take damage! is already dead!" << std::endl;
	else
	{
		if (((int)this->_hitPoints - (int)amount) > 0)
		{
			std::cout << "ClapTrap " << this->_name << " take " << amount << " damage !" << std::endl;
			this->_hitPoints -= amount;
		}
		else
		{
			std::cout << "ClapTrap " << this->_name << " take " << amount << " damage !" << std::endl;
			std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
			this->_hitPoints = 0;
		}
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " repaired itself ! " << amount << " hitpoints has been recover !" << std::endl;
		this->_hitPoints += amount;
	}
	else
	{
		if (this->_hitPoints == 0)
			std::cout << "Oh no! " << this->_name << " can't repaired itself ! Is dead !" << std::endl;
		else if (this->_energyPoints == 0)
			std::cout << "Oh no! " << this->_name << " can't repaired itself ! Too few energy points !" << std::endl;
	}
	return ;
}

