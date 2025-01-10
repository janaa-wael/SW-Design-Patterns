/*
 * CharacterFactory.cpp
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#include "CharacterFactory.h"
#include "Character.h"

Character* CharacterFactory::getCharacter(char key)
{
	if(m_characters.find(key) == m_characters.end())
	{
		m_characters[key] = new Character(key);
	}
	return m_characters[key];
}


