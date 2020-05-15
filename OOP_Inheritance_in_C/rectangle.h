/*
 * shape.h
 *
 *  Created on: ???/???/????
 *      Author: MuhammadHussein94
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include <stdint.h>
#include "shape.h"
/*rectangle's struct attributes*/
/*by defining shape class in start of rectangle class, we can say rectangle class is a shape class*/
/*but if we moved shape class to be between width and hight, we can say recangle class has a shape class as component */
typedef struct
{
	shape rect;		 /*inherited shape*/
	uint16_t width; /*specific rectangle attribute shape*/
	uint16_t hight;
}rectangle;

#endif /* RECTANGLE_H_ */

void rectangle_constructor(rectangle *me, int16_t x0, int16_t y0, uint16_t w0, uint16_t h0);
/*me pointer as this pointer shall point to only the current used object of class and draw function shall not change the ojbect attributes*/
void rectangle_draw(rectangle const * const me);
uint32_t rectangle_area(rectangle const * const me);

