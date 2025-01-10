/*
 * Page.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef PAGE_H_
#define PAGE_H_

#include "PageObject.h"

class Page : public PageObject{
public:
		Page() = default;
		virtual void Add(PageObject a) override;
		virtual void Remove() override;
		virtual void Delete(PageObject a) override;
};

#endif /* PAGE_H_ */
