/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: MuhammadHussein94
 */
#include<stdlib.h>
#include <assert.h>
#include"rectangle.h"
#include"shape.h"
shape s1; /* static allocation */
rectangle r1;/* static allocation */
int main()
{
	uint32_t area;
	shape	s2; /*automatic allocation*/
	shape 	*ps3=malloc(sizeof(shape)); /*dynamic  allocation*/

	shape_constructor(&s1,1,2);
	shape_constructor(&s2,3,4);
	shape_constructor(ps3,5,6);
	rectangle_constructor(&r1,1,2,20,20);

	shape_move(&s1,10,1);
	shape_move(&s2,8,2);
	shape_move(ps3,-3,62);
	assert(shape_distanceFrom(&s1, &s2));
	assert(shape_distanceFrom(&s1, &s2) ==
			shape_distanceFrom(&s2, &s1));

	area=rectangle_area(&r1);
/*	we used shape operation with r1 rectangle since the me pointer points to shape and rectangle at same time so it could be savely used with shape struct*/
/*	this means rect class inherits all opertion from shape class*/
	shape_move(&r1,2,5);
	//shape_move((shape *)&r1,2,5); some compilres u have to do upcasting, casting from derived class to base class is called upcasting
	// going from derived class to upper class is called generaliztion and going from parent class to derived class is called generaliztion

	free(ps3);
	return 0;
}

