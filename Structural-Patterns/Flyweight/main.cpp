/*
 * main.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "Character.h"
#include "CharacterFactory.h"
#include <iostream>

int main()
{
	CharacterFactory characterFactory;

	//Extrinsic State
	int position = 0;

	//Drawing characters 'A', 'B', 'C' at different positions
	characterFactory.getCharacter('A')->draw(1);
	characterFactory.getCharacter('B')->draw(2);
	characterFactory.getCharacter('C')->draw(3);


}


