/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:25:35 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/23 13:56:34 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	std::cout << "Creation of DEFAULT SCAVTRAP ! He is the GATE KEEPER" << std::endl;
	ScavTrap	defScav;
	defScav.guardGate();
	std::cout << std::endl;

	std::cout << "Now he is fighting a RANDOM BUG !" << std::endl;
	defScav.attack("Random bug");
	std::cout << "What the hell ?! He is useless ! What piece of garbage." << std::endl << std::endl;

	std::cout << "At least he can endure a bit." << std::endl;
	defScav.takeDamage(8);
	std::cout << std::endl;

	std::cout << "...and we have to help him ! Such a waste..." << std::endl;
	defScav.beRepaired(5);
	std::cout << std::endl;


	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;

	std::cout << "Creation of DEFAULT FRAGTRAP ! Look, he is doin a HIGH FIVE" << std::endl;
	FragTrap	defFrag;
	defFrag.highFivesGuys();
	std::cout << std::endl;

	std::cout << "Now he is fighting a RANDOM BUG !" << std::endl;
	defFrag.attack("Random bug");
	std::cout << "What the hell ?! He is useless ! What piece of garbage." << std::endl << std::endl;

	std::cout << "At least he can endure a bit." << std::endl;
	defFrag.takeDamage(8);
	std::cout << std::endl;

	std::cout << "...and we have to help him ! Such a waste..." << std::endl;
	defFrag.beRepaired(5);
	std::cout << std::endl;


	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;
	std::string		randomPainter("Donatelo");

	std::cout << "Creation of FragTrap with FRAG name : " << randomPainter << " !! He is doing a HIGH FIVE too !" << std::endl;
	FragTrap	customFrag(randomPainter);
	customFrag.highFivesGuys();
	std::cout << std::endl;

	std::cout << "Now he is fighting a RANDOM CHICKEN !" << std::endl;
	customFrag.attack("Random Chicken");
	std::cout << "What the hell ?! He is useless ! What piece of garbage." << std::endl << std::endl;

	std::cout << "At least he can endure a bit." << std::endl;
	customFrag.takeDamage(8);
	std::cout << std::endl;

	std::cout << "...and we have to help him ! Such a waste..." << std::endl;
	customFrag.beRepaired(5);
	std::cout << std::endl;


	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;

	std::cout << "In case of this one dies, we are going to CLONE him. Another HIGH FIVE, what a surprise..." << std::endl;
	FragTrap	cloneFrag(customFrag);
	cloneFrag.highFivesGuys();
	std::cout << std::endl;

	std::cout << "BUT THE CHICKEN ATTACKS CUSTOMFRAG IN RETURN !" << std::endl;
	customFrag.takeDamage(100);
	std::cout << std::endl;

	std::cout << "Vengeance is mine, CLONE ! ATTACK THE CHICKEN !" << std::endl;
	cloneFrag.attack("Chicken");
	std::cout << std::endl;

	std::cout << "Now, repaire our CUSTOMFRAG !" << std::endl;
	customFrag.beRepaired(150);
	std::cout << "At lease they are good at something..." << std::endl << std::endl;

	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;
}
