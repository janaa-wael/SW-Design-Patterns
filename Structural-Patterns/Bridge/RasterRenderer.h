/*
 * RasterRenderer.h
 *
 *  Created on: Jan 9, 2025
 *      Author: Jana Wael
 */

#ifndef RASTERRENDERER_H_
#define RASTERRENDERER_H_

#include "Renderer.h"

class RasterRenderer : public Renderer{
public:
	virtual void render() override;
};

#endif /* RASTERRENDERER_H_ */
