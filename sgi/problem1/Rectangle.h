#include "Point2D.h"

//class Point2D;

class Rectangle
{
private:
    float width;
    float height;
    Point2D botLeft;
    Point2D botRight;
    Point2D topLeft;
    Point2D topRight;
public:
    // Methods for constructing a Rectangle with initial size and coordinates
    Rectangle(float Width, float Height, float X, float Y);
    Rectangle(Point2D &p1, Point2D &p2);

    // Copy constructor
    Rectangle(const Rectangle &new_obj);

    // Assignment operator
    Rectangle& operator=(const Rectangle &new_obj);

    // Check if point inside Rectangle
    bool isPntInsideRect(Point2D&);

    // check if two Rects intersect
    bool isRectsOverlap(Rectangle& rect2);

    // Method for printing the coordinates
    void getCoordinates();

};


