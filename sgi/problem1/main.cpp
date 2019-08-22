#include "Rectangle.h"

//using namespace std;

int main()
{
    cout << "Construct Rect width, height and one point:" << endl;
    Rectangle rect1 = Rectangle(3.4, 9.8, 1.5, 2.6);
    cout << "rect1 coordinates:" << endl;
    rect1.getCoordinates();

    cout << endl;
    cout << "Construct Rect with 2 points:" << endl;
    Point2D p1 = Point2D(1,3);
    Point2D p2 = Point2D(-2,-5);
    Rectangle rect2 = Rectangle(p1,p2);
    cout << "rect2 coordinates:" << endl;
    rect2.getCoordinates();
    
    cout << endl;
    cout << "Check if a point is contained by a rectangle" << endl;
    Point2D p3 = Point2D(2,4);
    if(rect1.isPntInsideRect(p3)){
        cout << "Point(" << p3.getX()<<","<<p3.getY() 
            << ") is inside the rect" << endl;
        //rect1.getCoordinates();
    }
    else{
        cout << "Point(" << p3.getX()<<","<<p3.getY() 
            << ") is NOT inside the rect" << endl;
    }
    rect1.getCoordinates();

    cout << endl;
    cout << "Check if two rectangles are overlapped" << endl;
    if(rect1.isRectsOverlap(rect2)){
        cout << "Rectangle 1: " << endl;
        rect1.getCoordinates();
        cout << endl;
        cout << "is OVERLAPPED with \n Rectangle 2:" << endl;
        rect2.getCoordinates();
    }
    else{
        cout << "Rectangle 1: " << endl;
        rect1.getCoordinates();
        cout << endl;
        cout << "is NOT OVERLAPPED with \n Rectangle 2:" << endl;
        rect2.getCoordinates();
        
    }
    
    return 0;
}
