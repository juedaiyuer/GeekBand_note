#include<iostream.h>

class Point
{
public:
	Point(int _x=0,int _y=0)
	{
		x = _x;
		y = _y;
	}
private:
	int x;
	int y;
};

void main()
{
	Point p1 = new Point(2,3);
};