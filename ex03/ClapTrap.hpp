/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:44:49 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/29 09:48:08 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	protected:
		static const unsigned int _base_hit_points = 10;
		static const unsigned int _base_nrj_points = 10;
		static const unsigned int _base_atk_damage = 0;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &);
		virtual ~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &);

		ClapTrap(std::string const &birthName);
		virtual void	attack(std::string const & target) const;
		virtual void	takeDamage(unsigned int const &amount);
		virtual void	beRepaired(unsigned int const &amount);

	protected:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_nrj_points;
		unsigned int	_atk_damage;
};

#endif
