#include "Point2D.h"

Point2D::Point2D()
{
    x = 0;
    y = 0;
}

Point2D::Point2D(float a, float b)
{
    x = a;
    y = b;
}

float Point2D::getX()
{
    return x;
}

float Point2D::getY()
{
    return y;
}
