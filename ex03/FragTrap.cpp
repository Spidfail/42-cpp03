/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guhernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:46:25 by guhernan          #+#    #+#             */
/*   Updated: 2021/11/29 09:59:01 by guhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {

	this->_hit_points = _frag_hit_points;
	this->_nrj_points = _frag_nrj_points;
	this->_atk_damage = _frag_atk_damage;

	std::cout << "-------A FragTrap poped with the name [" << this->_name << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Wow, this one is tough." << std::endl;
}

FragTrap::FragTrap( std::string const &birthName ) : ClapTrap(birthName){

	this->_hit_points = _frag_hit_points;
	this->_nrj_points = _frag_nrj_points;
	this->_atk_damage = _frag_atk_damage;

	std::cout << "-------A FragTrap poped with the name [" << this->_name << "] ." << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Wow, this one is tough." << std::endl;
}

FragTrap::FragTrap(const FragTrap &instance) : ClapTrap(instance) {

	*this = instance;
	std::cout << "-------You copied a FragTrap with the name [" << this->_name << "] !" << std::endl;
	std::cout << "--------------Hit Points : " << this->_hit_points << std::endl;
	std::cout << "--------------Energy Points : " << this->_nrj_points << std::endl;
	std::cout << "--------------Attack Damage : " << this->_atk_damage << std::endl;
	std::cout << "-------Wow, this one is tough." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

FragTrap	&FragTrap::operator=(const FragTrap &target) {

	this->_name = target._name;
	this->_hit_points = target._hit_points;
	this->_nrj_points = target._nrj_points;
	this->_atk_damage = target._atk_damage;

	return *this;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

void	FragTrap::attack(std::string const & target) const {

	std::cout << "-------FragTrap [" << this->_name << "] attacks [" << target << "], causing it " << this->_atk_damage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void) const {

	std::cout << "-------**FragTrap [" << this->_name << "] says : HI FIVE GUYS ! What a cool guy :)." << std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//

FragTrap::~FragTrap( void ) {
	
	std::cout << "FragTrap died in pain. Good for us." << std::endl;
}
