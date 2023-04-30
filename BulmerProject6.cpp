// Mark Bulmer - CSC 234 - 4-9-2022

#include <iostream>
#include <cmath>
using namespace std;

class MyPoint
{
private:
	double x;
	double y;
		
public:
	MyPoint()
	{
		x = y = 0;
	}
		
	MyPoint(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
		
	double distance(const MyPoint& p2) const
	{
		return sqrt((x - p2.x) * (x - p2.x) + (y - p2.y) * (y - p2.y));
	}
		
	double getX() const
	{
		return x;
	}
		
	double getY() const
	{
		return y;
	}
};

class ThreeDPoint: public MyPoint
{
private:
	double z;
		
public:
	ThreeDPoint(): MyPoint(0, 0), z(0)
	{
		z = 0;
	}
	ThreeDPoint(double x, double y, double z) : MyPoint(x, y)
	{
		this->z = z;
	}
	
	double getZ() const
	{
        return z;
    }
	
	double distance (const ThreeDPoint& p2)
	{
        return sqrt((getX() - p2.getX()) * (getX() - p2.getX()) 
            + (getY() - p2.getY()) * (getY() - p2.getY()) 
            + (getZ() - p2.getZ()) * (getZ() - p2.getZ()));
    }
};

int main()
{
    cout << "distance is " << ThreeDPoint().distance(ThreeDPoint(10, 30, 25.5)) << endl;

    return 0;
}