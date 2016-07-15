/ ------------------------------------------
// box.cpp
// ------------------------------------------
#include "box.h"

// Member functions definitions
void Box::setLength( double len )
{
    if (len>=0)
        length = len;
}

void Box::setBreadth( double bre )
{
    if (bre>=0)
        breadth = bre;
}

void Box::setHeight( double hei )
{
    if (hei>=0)
        height = hei;
}
double Box::getVolume(void)
{
    return length * breadth * height;
}