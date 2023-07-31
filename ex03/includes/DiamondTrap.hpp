/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:27 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/31 19:07:30 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{

private:
	std::string	_name;

public:
	DiamondTrap(void);
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap& obj);
	~DiamondTrap(void);

	using			ScavTrap::attack;
	void			whoAmI(void);
	std::string		getName(void) const;

};
