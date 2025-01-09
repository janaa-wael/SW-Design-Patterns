/*
 * VectorRenderer.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef VECTORRENDERER_H_
#define VECTORRENDERER_H_

#include "Renderer.h"

class VectorRenderer : public Renderer{
public:
	virtual void render() override;
};

#endif /* VECTORRENDERER_H_ */
