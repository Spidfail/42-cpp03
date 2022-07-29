/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:39:00 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/29 10:00:27 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const &);
		~DiamondTrap();
		DiamondTrap		&operator=(DiamondTrap const &);
		
		void	attack(std::string const &target) const;
		void	takeDamage(unsigned int const &amount);
		void	beRepaired(unsigned int const &amount);

		DiamondTrap(std::string const &);
		std::string		whoAmI(void) const;

	private:
		std::string		_name;
};

#endif
