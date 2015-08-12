#include<iostream.h>
//为下面的Rectangle类实现构造函数，拷贝构造函数，赋值操作符，析构函数。

class Shape
{
     int no;
};

class Point
{
public:
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
	leftUp->x = x;
	leftUp->y = y;
	rightDown->x = x+width;
	rightDown->y = y+height;
};

inline
Rectangle::Rectangle(const Rectangle& other)
{
	height = other.height;
	width = other.width;
	leftUp = other.leftUp;
	rightDown = other.rightDown;

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

void main()
{
	Rectangle c1(2,2,2,2);
	Rectangle c2(3,3,3,3);

	Rectangle c3(c1);
	cout<<"("<<c1.leftUp->x<<","<<c1.leftUp->y<<")"<<endl;
   
};