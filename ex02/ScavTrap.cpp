/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:45:01 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/23 17:59:36 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap(){

	_hit_points = 100;
	_nrj_points = 50;
	_atk_damage = 20;

	std::cout << "-------A ScavTrap poped with the name [" << this->getName() << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->getHitPoints() << std::endl;
	std::cout << "--------------Energy Points : " << this->getEnergyPoints() << std::endl;
	std::cout << "--------------Attack Damage : " << this->getAttackDamage() << std::endl;
	std::cout << "-------Still stupid, but not useless. " << std::endl;
}

ScavTrap::ScavTrap( std::string &birthName ) : ClapTrap(birthName) {

	_hit_points = 100;
	_nrj_points = 50;
	_atk_damage = 20;

	std::cout << "-------A ScavTrap poped with the name [" << this->getName() << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->getHitPoints() << std::endl;
	std::cout << "--------------Energy Points : " << this->getEnergyPoints() << std::endl;
	std::cout << "--------------Attack Damage : " << this->getAttackDamage() << std::endl;
	std::cout << "-------Still stupid, but not useless. " << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &instance) : ClapTrap() {

	*this = instance;
	std::cout << "-------You copied a ScavTrap with the name [" << this->getName() << "] !" << std::endl;
	std::cout << "--------------Hit Points : " << this->getHitPoints() << std::endl;
	std::cout << "--------------Energy Points : " << this->getEnergyPoints() << std::endl;
	std::cout << "--------------Attack Damage : " << this->getAttackDamage() << std::endl;
	std::cout << "-------Okay okay, why not after all !" << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

ScavTrap	&ScavTrap::operator=(const ScavTrap &target) {

	this->_name = target.getName();
	this->_hit_points = target.getHitPoints();
	this->_nrj_points = target.getEnergyPoints();
	this->_atk_damage = target.getAttackDamage();

	return *this;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

void	ScavTrap::attack(std::string const & target) const {

	std::cout << "-------ScavTrap [" << this->getName() << "] attacks [" << target << "], causing it " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void) const {

	std::cout << "-------**ScavTrap [" << this->getName() << "] entered in Gate Keeper Mode. Beware his missiles." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

ScavTrap::~ScavTrap( void ) {
	
	std::cout << "ScavTrap died in pain. Good for us." << std::endl;
}
