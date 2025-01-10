/*
 * PageObject.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef PAGEOBJECT_H_
#define PAGEOBJECT_H_

class PageObject {
public:
	//PageObject() = default;
	//virtual ~PageObject() = default;
	virtual void Add(PageObject a) {}
	virtual void Remove() {}
	virtual void Delete(PageObject a) {}
};

#endif /* PAGEOBJECT_H_ */
