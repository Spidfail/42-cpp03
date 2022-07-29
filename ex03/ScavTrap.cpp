/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:45:01 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/29 10:02:53 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {

	this->_hit_points = ScavTrap::_scav_hit_points;
	this->_nrj_points = ScavTrap::_scav_nrj_points;
	this->_atk_damage = ScavTrap::_scav_atk_damage;

	std::cout << "-------A ScavTrap poped with the name [" << _name << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Still stupid, but not useless. " << std::endl;
}

ScavTrap::ScavTrap( std::string const &birthName ) : ClapTrap(birthName) {

	this->_hit_points = ScavTrap::_scav_hit_points;
	this->_nrj_points = ScavTrap::_scav_nrj_points;
	this->_atk_damage = ScavTrap::_scav_atk_damage;

	std::cout << "-------A ScavTrap poped with the name [" << this->_name << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Still stupid, but not useless. " << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &instance) : ClapTrap(instance) {

	*this = instance;
	std::cout << "-------You copied a ScavTrap with the name [" << this->_name << "] !" << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Okay okay, why not after all !" << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

ScavTrap	&ScavTrap::operator=(const ScavTrap &target) {

	this->_name = target._name;
	this->_hit_points = target._hit_points;
	this->_nrj_points = target._nrj_points;
	this->_atk_damage = target._atk_damage;

	return *this;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
void	ScavTrap::attack(std::string const & target) const {

	std::cout << "-------ScavTrap [" << this->_name << "] attacks [" << target << "], causing it " << this->_atk_damage << " points of damage!" << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
void	ScavTrap::guardGate(void) const {

	std::cout << "-------**ScavTrap [" << this->_name << "] entered in Gate Keeper Mode. Beware his missiles." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

ScavTrap::~ScavTrap( void ) {
	
	std::cout << "ScavTrap died in pain. Good for us." << std::endl;
}
