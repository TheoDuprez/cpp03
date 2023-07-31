/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:27 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/31 19:12:34 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

public:
	FragTrap(void);
	FragTrap(const std::string name);
	FragTrap(const FragTrap& obj);
	~FragTrap(void);

	void			highFivesGuys(void) const;
	std::string		getName(void) const;
	unsigned int	getAttackDamage() const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getEnergyPoints(void) const;
};
