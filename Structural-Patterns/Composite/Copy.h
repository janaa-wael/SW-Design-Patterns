/*
 * Copy.h
 *
 *  Created on: Jan 10, 2025
 *      Author: Jana Wael
 */

#ifndef COPY_H_
#define COPY_H_

#include "PageObject.h"
#include <vector>

class Copy : public PageObject{
private: std::vector<PageObject> copyPages;

public:
		Copy() = default;
		void AddElement(PageObject a );
		virtual void Add(PageObject a ) override;
		virtual void Remove() override;
		virtual void Delete(PageObject a) override;
};

#endif /* COPY_H_ */
