#include <iostream>

class Point
{
public:
    int x, y;

    double calculatedDistance(Point p)
    {
        double distance = sqrt(p.x * p.x + p.y * p.y);
    }
    void SetX(int a)
    {
        if (a > -0)
        {
            x = a;
        }
    }
    void SetY(int a)
    {
        if (a > -0)
        {
            y = a;
        }
    }
};

int main()
{
    Point point;
    point.x = 10;
    point.y = 15;
    double distance = point.calculatedDistance(point);
}
