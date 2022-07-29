/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:44:49 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/20 16:52:58 by guhernan         ###   ########.fr       */
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
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &);

		ClapTrap(std::string &birthName);
		void	attack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	private:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_nrj_points;
		unsigned int	_atk_damage;

};

#endif
