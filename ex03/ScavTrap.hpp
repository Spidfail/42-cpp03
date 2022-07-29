/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:45:07 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/29 09:47:37 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap {

	protected:
		static const unsigned int _scav_hit_points = 100;
		static const unsigned int _scav_nrj_points = 20;
		static const unsigned int _scav_atk_damage = 15;

	public:
		ScavTrap();
		ScavTrap(std::string const &birthName);
		ScavTrap(ScavTrap const&);
		ScavTrap	&operator=(const ScavTrap &);
		~ScavTrap();

		virtual void	attack(std::string const &target) const;

		void	guardGate(void) const;


};

#endif

