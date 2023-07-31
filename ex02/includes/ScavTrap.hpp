/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tduprez <tduprez@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:38:27 by tduprez           #+#    #+#             */
/*   Updated: 2023/07/30 17:05:25 by tduprez          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{

public:
	ScavTrap(void);
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap& obj);
	~ScavTrap(void);

	void	guardGate(void) const;
};
