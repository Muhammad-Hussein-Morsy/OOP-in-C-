/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: MuhammadHussein94
 */
#include<stdlib.h>

#include"shape.h"
#include <assert.h>
shape s1; /* static allocation */
int main()
{

	shape	s2; /*automatic allocation*/
	shape 	*ps3=malloc(sizeof(shape)); /*dynamic  allocation*/
	shape_constructor(&s1,1,2);
	shape_constructor(&s2,3,4);
	shape_constructor(ps3,5,6);

	shape_move(&s1,10,1);
	shape_move(&s2,8,2);
	shape_move(ps3,-3,62);
	assert(shape_distanceFrom(&s1, &s2));
	assert(shape_distanceFrom(&s1, &s2) ==
			shape_distanceFrom(&s2, &s1));
	free(ps3);
	return 0;
}

