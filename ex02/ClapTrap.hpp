/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:44:49 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/23 17:59:09 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

	public:
		ClapTrap();
		ClapTrap(const ClapTrap &);
		virtual ~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &);

		ClapTrap(std::string &birthName);
		virtual void	attack(std::string const & target) const;
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;

	protected:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_nrj_points;
		unsigned int	_atk_damage;
};

#endif
