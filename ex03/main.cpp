/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:25:35 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/22 22:27:46 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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
	std::cout << "////////////////////////SCAVTRAP////////////////////////////////" << std::endl;
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
	std::cout << "////////////////////////FRAGTRAP////////////////////////////////" << std::endl;
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
	std::cout << "////////////////////////DIAMONDTRAP/////////////////////////////" << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;

	std::cout << "Creation of DEFAULT DIAMONDTRAP ! Look, he is doin a HIGH FIVE" << std::endl;
	DiamondTrap	defDiamond;
	defDiamond.highFivesGuys();
	std::cout << std::endl;

	std::cout << "Now he is fighting a RANDOM BUG !" << std::endl;
	defDiamond.attack("Random bug");
	std::cout << "What the hell ?! He is useless ! What piece of garbage." << std::endl << std::endl;

	std::cout << "At least he can endure a bit." << std::endl;
	defDiamond.takeDamage(8);
	std::cout << std::endl;

	std::cout << "...and we have to help him ! Such a waste..." << std::endl;
	defDiamond.beRepaired(5);
	std::cout << std::endl;


	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;
	std::string		randomPainter("Gericault");

	std::cout << "Creation of DiamondTrap with CUSTOM name : " << randomPainter << " !! He is doing a HIGH FIVE too !" << std::endl;
	DiamondTrap	customDiamond(randomPainter);
	customDiamond.highFivesGuys();
	customDiamond.guardGate();
	customDiamond.whoAmI();
	std::cout << std::endl;

	std::cout << "Now he is fighting a RANDOM CHICKEN !" << std::endl;
	customDiamond.attack("Random Chicken");
	std::cout << "What the hell ?! He is useless ! What piece of garbage." << std::endl << std::endl;

	std::cout << "At least he can endure a bit." << std::endl;
	customDiamond.takeDamage(8);
	std::cout << std::endl;

	std::cout << "...and we have to help him ! Such a waste..." << std::endl;
	customDiamond.beRepaired(5);
	std::cout << std::endl;


	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;

	std::cout << "In case of this one dies, we are going to CLONE him. Another HIGH FIVE, what a surprise..." << std::endl;
	DiamondTrap	cloneDiamond(customDiamond);
	cloneDiamond.highFivesGuys();
	cloneDiamond.guardGate();
	cloneDiamond.whoAmI();
	std::cout << std::endl;

	std::cout << "BUT THE CHICKEN ATTACKS CUSTOMFRAG IN RETURN !" << std::endl;
	customDiamond.takeDamage(100);
	std::cout << std::endl;

	std::cout << "Vengeance is mine, CLONE ! ATTACK THE CHICKEN !" << std::endl;
	cloneDiamond.attack("Chicken");
	std::cout << std::endl;

	std::cout << "Now, repaire our CUSTOMFRAG !" << std::endl;
	customDiamond.beRepaired(150);
	std::cout << "At lease they are good at something..." << std::endl << std::endl;

	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////" << std::endl;




}
