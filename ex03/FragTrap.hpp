/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:46:20 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/29 09:49:43 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	protected:
		static const unsigned int _frag_hit_points = 100;
		static const unsigned int _frag_nrj_points = 100;
		static const unsigned int _frag_atk_damage = 30;

	public:
		FragTrap();
		FragTrap(std::string const &birthName);
		FragTrap(FragTrap const &);
		FragTrap	&operator=(FragTrap const &);
		~FragTrap();

		virtual void	attack(std::string const &target) const;

		void	highFivesGuys(void) const;

};

#endif
