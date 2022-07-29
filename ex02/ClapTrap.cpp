/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 17:44:41 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/23 17:53:45 by guhernan         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("Default"), _hit_points(10), _nrj_points(10), _atk_damage(0) {

	std::cout << "-------A ClapTrap poped with the name [" << this->_name << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Too bad, he is stupid and useless. " << std::endl;
}

ClapTrap::ClapTrap( std::string &birthName ) : _name(birthName), _hit_points(10), _nrj_points(10), _atk_damage(0) {

	std::cout << "-------A ClapTrap poped with the name [" << this->_name << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Too bad, he is stupid and useless. " << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &instance) {

	*this = instance;
	std::cout << "-------You copied a ClapTrap with the name [" << this->_name << "] !" << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Why did you do that ? I told you he is useless and everything !" << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

ClapTrap	&ClapTrap::operator=(const ClapTrap &target) {

	this->_name = target._name ;
	this->_hit_points = target._hit_points ;
	this->_nrj_points = target._nrj_points ;
	this->_atk_damage = target._atk_damage ;

	return *this;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

void	ClapTrap::attack(std::string const & target) const {

	std::cout << "-------ClapTrap [" << _name << "] attacks [" << target << "], causing it " << this->_atk_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (this->_hit_points >= amount) {
		this->_hit_points -= amount;
	}
	else {
		this->_hit_points = 0;
	}

	std::cout << "-------ClapTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;

	if (_hit_points > 0) {
		std::cout << "-------ClapTrap " << this->_name << " have " << this->_hit_points << " hit points now." << std::endl;
	}
	else
		std::cout << "-------ClapTrap " << this->_name << " have " << this->_hit_points << ". He is now dead !" << std::endl;
	
}

void	ClapTrap::beRepaired(unsigned int amount) {
	
	_hit_points += amount;
	std::cout << "-------ClapTrap " << _name << " have been repaired." << std::endl;
	std::cout << "-------He have now " << _hit_points << " hit points." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
std::string		ClapTrap::getName(void) const {
	return this->_name;
}

unsigned int	ClapTrap::getHitPoints(void) const {
	return this->_hit_points;
}

unsigned int	ClapTrap::getEnergyPoints(void) const {
	return this->_nrj_points;
}

unsigned int	ClapTrap::getAttackDamage(void) const {
	return this->_atk_damage;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

ClapTrap::~ClapTrap( void ) {
	
	std::cout << "ClapTrap died in pain. Good for us." << std::endl;
}
