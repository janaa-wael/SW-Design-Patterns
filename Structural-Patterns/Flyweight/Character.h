/*
 * Character.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_

class Character {
private:
		char m_intrinsicState;
public:
		Character(char intrinsicState);
		void draw(int extrinsicState);
};

#endif /* CHARACTER_H_ */
