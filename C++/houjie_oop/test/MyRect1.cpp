#include<iostream.h>
// rough implementation 

class Point
{
public:
	Point(int _x=0,int _y=0)
	{
		x = _x;
		y = _y;
	}

	int x;
	int y;
};

class Rectangle:public Point
{
public:
	 int width;
     int height;

     Point * leftUp;
     Point * rightDown;

     Rectangle(int width, int height, int x, int y);
     Rectangle(const Rectangle& other);
     Rectangle& operator=(const Rectangle& other);
     ~Rectangle();
};

inline 
Rectangle::Rectangle(int width,int height,int x,int y)
{
	int _x = x;
	int _y = y;
	int _height = height;
	int _width = width;

	leftUp = new Point(_x,_y);

	rightDown = new Point(_x+width,_y+height);

};

inline
Rectangle::Rectangle(const Rectangle& other)
{

	width = other.width;
	height = other.height;
	leftUp = other.leftUp;
	rightDown = other.rightDown;
};

inline
Rectangle::~Rectangle()
{
	delete leftUp;
	delete rightDown;
};

void main()
{
	Rectangle rect1(2,2,2,2);
	cout<<"("<<rect1.leftUp->x<<","<<rect1.leftUp->y<<")"<<endl;
    cout<<rect1.rightDown->x<<endl;
	Rectangle rect2(rect1);

};