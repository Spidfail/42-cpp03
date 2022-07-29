/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:45:07 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/23 18:00:25 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(std::string &birthName);
		ScavTrap(const ScavTrap &);
		ScavTrap	&operator=(const ScavTrap &);
		~ScavTrap();

		void	attack(std::string const &target) const;

		void	guardGate() const;
};

#endif

