#include<iostream.h>


class Shape
{
     int no;
};

class Point
{
public:
	Point(int _x,int _y)
	{
		x = _x;
		y = _y;
	}

	Point(){}

private:
     int x;
     int y;
	 
	 
};

class Rectangle: public Shape
{
public:
     int width;
     int height;

     Point * leftUp;
	 Point * rightDown;

public:
     Rectangle(int width, int height, int x, int y);
     Rectangle(const Rectangle& other);
     Rectangle& operator=(const Rectangle& other);
     ~Rectangle();

};

inline 
Rectangle::Rectangle(int width, int height, int x, int y)
{
	Point p1 = new Point(x,y);
	leftUp = &p1;
	Point p2 = new Point(x+width,y+height);
	rightDown = &p2;
};


inline
Rectangle& Rectangle::operator=(const Rectangle& other)
{
	if(this == &other)
		return *this;
	
	height = other.height;
	width = other.width;
	leftUp = other.leftUp;
	rightDown = other.rightDown;

	return *this;
	

};

inline
Rectangle::~Rectangle()
{
	delete leftUp;
	delete rightDown;
};

inline
Rectangle::Rectangle(const Rectangle& other)
{
	
	height = other.height;
	width = other.width;
	leftUp = other.leftUp;
	rightDown = other.rightDown;

};


void main()
{
	Rectangle c1(2,2,2,2);
//	Rectangle c2(3,3,3,3);

//	Rectangle c3(c1);
//	cout<<"("<<c1.leftUp->x<<","<<c1.leftUp->y<<")"<<endl;
   
};