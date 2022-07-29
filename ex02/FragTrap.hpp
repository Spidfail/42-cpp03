/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:46:20 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/23 18:03:56 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap();
		FragTrap(std::string &birthName);
		FragTrap(FragTrap const &);
		FragTrap	&operator=(FragTrap const &);
		~FragTrap();

		void	attack(std::string const &target) const;

		void	highFivesGuys(void) const;
};

#endif
