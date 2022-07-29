/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:25:35 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/20 16:00:32 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {

	std::cout << "Creation of DEFAULT CLAPTRAP !" << std::endl;
	ClapTrap	defClap;
	std::cout << std::endl;
	std::cout << "Now he is fighting a RANDOM BUG !" << std::endl;
	defClap.attack("Random bug");
	std::cout << "What the hell ?! He is useless ! What piece of garbage." << std::endl << std::endl;

	std::cout << "At least he can endure a bit." << std::endl;
	defClap.takeDamage(8);
	std::cout << std::endl;

	std::cout << "...and we have to help him ! Such a waste..." << std::endl;
	defClap.beRepaired(5);
	std::cout << std::endl;

	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;
	std::string		randomPainter("Michelangelo");

	std::cout << "Creation of ClapTrap with CUSTOM name : MICHELANGELO !!" << std::endl;
	ClapTrap	customClap(randomPainter);
	std::cout << std::endl;
	std::cout << "Now he is fighting a RANDOM CHICKEN !" << std::endl;
	customClap.attack("Random Chicken");
	std::cout << "What the hell ?! He is useless ! What piece of garbage." << std::endl << std::endl;

	std::cout << "At least he can endure a bit." << std::endl;
	customClap.takeDamage(8);
	std::cout << std::endl;

	std::cout << "...and we have to help him ! Such a waste..." << std::endl;
	customClap.beRepaired(5);
	std::cout << std::endl;


	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;

	std::cout << "In case of this one dies, we are going to CLONE him." << std::endl;
	ClapTrap	cloneClap(customClap);
	std::cout << std::endl;

	std::cout << "BUT THE CHICKEN ATTACKS CUSTOMCLAP IN RETURN !" << std::endl;
	customClap.takeDamage(100);
	std::cout << std::endl;

	std::cout << "Vengeance is mine, CLONE ! ATTACK THE CHICKEN !" << std::endl;
	cloneClap.attack("Chicken");
	std::cout << std::endl;

	std::cout << "Now, repaire our CUSTOMCLAP !" << std::endl;
	customClap.beRepaired(150);
	std::cout << "At lease they are good at something..." << std::endl << std::endl;


}
