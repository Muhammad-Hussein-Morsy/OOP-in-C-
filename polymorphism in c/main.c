
#include "shape.h"
#include "rectangle.h"

#include <stdlib.h> /* for malloc() and free() */

Shape s1; /* static allocation */
Rectangle r1; /* static allocation */
uint32_t a;

int main() {
    Shape s2; /* automatic allocation */
    Shape *ps3 = malloc(sizeof(Rectangle)); /* dynamic allocation */
    //Shape const *ps1 = &s1; /* const pointer to s1 */
    
    Shape_ctor(&s1, 1, 2);
    Shape_ctor(&s2, 3, 4);
    Rectangle_ctor((Rectangle *)ps3, 5, 6, 10, 13);
    Rectangle_ctor(&r1, 1, 2, 15, 10);

    Shape const *graph[] = {
        &s1,
        (Shape *)&r1,
        ps3,
        (Shape *)0
    };
    drawGraph(graph);

    Shape_moveBy(&s1, 7, 8);
    Shape_moveBy(&s2, 9, 10);
    Shape_moveBy(ps3, -1, -2);
    //Shape_moveBy(ps1, -3, -4);

    Rectangle_draw(&r1);
    a = Rectangle_area(&r1);
    Shape_moveBy((Shape *)&r1, 7, 8);
/*    assert(Shape_distanceFrom((Shape *)&r1, (Shape *)&r1) == 0U);

    
    assert(Shape_distanceFrom(&s1, &s1) == 0U);
    assert(Shape_distanceFrom(&s1, &s2) ==
             Shape_distanceFrom(&s2, &s1));
    assert(Shape_distanceFrom(&s1, &s2) <=
             Shape_distanceFrom(&s1, ps3)
           + Shape_distanceFrom(ps3, &s2));*/

    free(ps3);
    


    /* transfer control to the RTOS to run the threads */

}
