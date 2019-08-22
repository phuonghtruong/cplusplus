#include "Rectangle.h"

Rectangle::Rectangle(float Width, float Height, float X, float Y)
{
    width = Width;
    height = Height;
    botLeft = Point2D(X,Y);
    botRight = Point2D(X+Width, Y);
    topLeft = Point2D(X, Y+Height);
    topRight = Point2D(X+Width, Y+Height);

}

Rectangle::Rectangle(Point2D &p1, Point2D &p2)
{
    
    if(p1.getX() < p2.getX())
    {
        if(p1.getY() < p2.getY())
        {
            botLeft = p1;
            botRight = Point2D(p2.getX(), p1.getY());
            topLeft = Point2D(p1.getX(), p2.getY());
            topRight = p2;
        }
        if(p1.getY() > p2.getY())
        {
            botLeft = Point2D(p1.getX(), p2.getY());
            botRight = p2;
            topLeft = p1;
            topRight = Point2D(p2.getX(), p1.getY());
        }
    }
    else
    {
        if(p1.getY() < p2.getY()){
            botLeft = Point2D(p2.getX(), p1.getY());
            botRight = p1;
            topLeft = p2;
            topRight = Point2D(p1.getX(), p2.getY());
        }
        if(p1.getY() > p2.getY())
        {
            botLeft = p2;
            botRight= Point2D(p1.getX(), p2.getY());
            topLeft = Point2D(p2.getX(), p1.getY());
            topRight= p1;
        }
    }
}

Rectangle::Rectangle(const Rectangle &new_obj)
{
    width = new_obj.width;
    height = new_obj.height;
    botLeft = new_obj.botLeft;
    botRight = new_obj.botRight;
    topLeft = new_obj.topLeft;
    topRight = new_obj.topRight;
}

Rectangle& Rectangle::operator=(const Rectangle &new_obj)
{
    if(this == &new_obj)
    {
        width = new_obj.width;
        height = new_obj.height;
        botLeft = new_obj.botLeft;
        botRight = new_obj.botRight;
        topLeft = new_obj.topLeft;
        topRight = new_obj.topRight;
    }
    return *this;
}

void Rectangle::getCoordinates()
{
    cout << "(" << topLeft.getX() << "," << topLeft.getY() << ")\t"
        << "(" << topRight.getX() << "," << topRight.getY() << ")\n"
         << "(" << botLeft.getX() << "," << botLeft.getY() << ")\t"
         << "(" << botRight.getX() << "," << botRight.getY() << ")" << endl;
}

bool Rectangle::isPntInsideRect(Point2D& pt){
    if(botLeft.getX() <= pt.getX() && topLeft.getY() >= pt.getY()
            && botRight.getY() <= pt.getY() && topRight.getX() >= pt.getX()){
        return true;
    }
    else{
        return false;
    }
}

bool Rectangle::isRectsOverlap(Rectangle& rect2)
{
    if(isPntInsideRect(rect2.botLeft) 
            || isPntInsideRect(rect2.botRight) 
            || isPntInsideRect(rect2.topLeft) 
            || isPntInsideRect(rect2.topRight)
            //|| rect2.isPntInsideRect(this->botLeft)
            //|| rect2.isPntInsideRect(this->botRight)
            //|| rect2.isPntInsideRect(this->topLeft)
            //|| rect2.isPntInsideRect(this->topRight)
            ){
        return true;
    }
    else{
        return false;
    }
}
