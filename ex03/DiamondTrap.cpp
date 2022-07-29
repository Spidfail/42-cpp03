/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:38:29 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/29 10:00:05 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap(), _name(ClapTrap::_name) {

	this->_hit_points = FragTrap::_frag_hit_points;
	this->_nrj_points = ScavTrap::_scav_nrj_points;
	this->_atk_damage = FragTrap::_frag_atk_damage;

	std::cout << "-------A DiamondTrap poped with the name [" << this->_name << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Wow, this one is tough." << std::endl;
}

DiamondTrap::DiamondTrap( std::string const &birthName ) : ClapTrap(birthName + "_clap_name"), ScavTrap(birthName), FragTrap(birthName), _name(birthName) {

	this->_hit_points = FragTrap::_frag_hit_points;
	this->_nrj_points = ScavTrap::_scav_nrj_points;
	this->_atk_damage = FragTrap::_frag_atk_damage;

	std::cout << "-------A DiamondTrap poped with the name [" << this->_name << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Wow, this one is tough." << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &instance) : ClapTrap(instance), ScavTrap(instance), FragTrap(instance) {

	*this = instance;
	std::cout << "-------You copied a DiamondTrap with the name [" << this->_name << "] !" << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Why did you do that ? I told you he is useless and everything !" << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &target) {

	this->_name = target._name;
	this->_hit_points = target._hit_points;
	this->_nrj_points = target._nrj_points;
	this->_atk_damage = target._atk_damage;

	return *this;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

void	DiamondTrap::attack(std::string const & target) const {

	std::cout << "-------DiamondTrap using ScavTrap attacks : " << std::endl;
	this->ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage(unsigned int const &amount) {

	if (this->_hit_points >= amount) {
		this->_hit_points -= amount;
	}
	else {
		this->_hit_points = 0;
	}

	std::cout << "-------DiamondTrap " << this->_name << " took " << amount << " points of damage!" << std::endl;

	if (_hit_points > 0) {
		std::cout << "-------DiamondTrap " << this->_name << " have " << this->_hit_points << " hit points now." << std::endl;
	}
	else
		std::cout << "-------DiamondTrap " << this->_name << " have " << this->_hit_points << ". He is now dead !" << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int const &amount) {

	_hit_points += amount;
	std::cout << "-------DiamondTrap " << _name << " have been repaired." << std::endl;
	std::cout << "-------He have now " << _hit_points << " hit points." << std::endl;
}

std::string		DiamondTrap::whoAmI(void) const {

	std::cout << "-------**DiamondTrap can be TWO -CLAP :" << std::endl;
	std::cout << "----------" << this->_name << std::endl;
	std::cout << "----------" << ClapTrap::_name << std::endl;
	return this->_name;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

DiamondTrap::~DiamondTrap( void ) {
	
	std::cout << "DiamondTrap died in pain. Good for us." << std::endl;
}

