/*
 * CharacterFactory.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef CHARACTERFACTORY_H_
#define CHARACTERFACTORY_H_

#include <unordered_map>
#include "Character.h"

class CharacterFactory {
private:
		std::unordered_map<char, Character*> m_characters;
public:
		Character* getCharacter(char key);
};

#endif /* CHARACTERFACTORY_H_ */

