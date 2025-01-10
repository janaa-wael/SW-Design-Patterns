/*
 * Character.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include <iostream>
#include "Character.h"



Character::Character(char intrinsicState)
:m_intrinsicState(intrinsicState)
{

}

void Character::draw(int extrinsicState)
{
	std::cout << "Drawing character '" << m_intrinsicState << "' at position " << extrinsicState << std::endl;
}

