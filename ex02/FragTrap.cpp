/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:46:25 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/23 18:05:08 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {

	_hit_points = 100;
	_nrj_points = 100;
	_atk_damage = 30;

	std::cout << "-------A FragTrap poped with the name [" << this->getName() << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->getHitPoints() << std::endl;
	std::cout << "--------------Energy Points : " << this->getEnergyPoints() << std::endl;
	std::cout << "--------------Attack Damage : " << this->getAttackDamage() << std::endl;
	std::cout << "-------Wow, this one is tough." << std::endl;
}

FragTrap::FragTrap( std::string &birthName ) : ClapTrap(birthName) {

	_hit_points = 100;
	_nrj_points = 100;
	_atk_damage = 30;

	std::cout << "-------A FragTrap poped with the name [" << this->getName() << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->getHitPoints() << std::endl;
	std::cout << "--------------Energy Points : " << this->getEnergyPoints() << std::endl;
	std::cout << "--------------Attack Damage : " << this->getAttackDamage() << std::endl;
	std::cout << "-------Wow, this one is tough." << std::endl;
}

FragTrap::FragTrap( const FragTrap &instance) : ClapTrap() {

	*this = instance;
	std::cout << "-------You copied a FragTrap with the name [" << this->getName() << "] !" << std::endl;
	std::cout << "--------------Hit Points : " << this->getHitPoints() << std::endl;
	std::cout << "--------------Energy Points : " << this->getEnergyPoints() << std::endl;
	std::cout << "--------------Attack Damage : " << this->getAttackDamage() << std::endl;
	std::cout << "-------Why did you do that ? I told you he is useless and everything !" << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

FragTrap	&FragTrap::operator=(const FragTrap &target) {

	this->_name = target.getName();
	this->_hit_points = target.getHitPoints();
	this->_nrj_points = target.getEnergyPoints();
	this->_atk_damage = target.getAttackDamage();

	return *this;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

void	FragTrap::attack(std::string const & target) const {

	std::cout << "-------FragTrap [" << this->getName() << "] attacks [" << target << "], causing it " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void) const {

	std::cout << "-------**FragTrap [" << this->getName() << "] says : HI FIVE GUYS ! What a cool guy :)." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

FragTrap::~FragTrap( void ) {
	
	std::cout << "FragTrap died in pain. Good for us." << std::endl;
}
