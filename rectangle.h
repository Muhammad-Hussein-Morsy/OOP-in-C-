/*
 * shape.h
 *
 *  Created on: ???/???/????
 *      Author: MuhammadHussein94
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include <stdint.h>
#include "shape.h"
/*rectangle's struct attributes*/
typedef struct
{
	shape rect;		 /*inherited shape*/
	uint16_t width; /*specific rectangle attribute shape*/
	uint16_t hight;
}rectangle;
#endif /* SHAPE_H_ */

void rectangle_constructor(rectangle *me, int16_t x0, int16_t y0, uint16_t w0, uint16_t h0);
/*me pointer as this pointer shall point to only the current used object of class and draw function shall not change the ojbect attributes */
void rectangle_draw(rectangle const * const me);
uint32_t rectangle_area(rectangle const * const me);

