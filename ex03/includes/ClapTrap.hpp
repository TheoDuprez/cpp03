/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:27 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/31 18:49:22 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{

protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
	
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& obj);
	~ClapTrap(void);

	ClapTrap&		operator=(const ClapTrap& obj);
	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	void			setAttackDamage(unsigned int value);
	std::string		getName(void) const;
	unsigned int	getAttackDamage() const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;

};
