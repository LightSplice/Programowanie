#include <iostream>

struct Point
{
    int x, y;
};
double calculatedDistance(int a, int b)
{
    double distance = sqrt(a * a + b * b);
    return distance;
}

void CoordinateTestVersion1()
{
    int x, y;

    std::cout << "Podaj x: ";
    std::cin >> x;

    std::cout << "Podaj y: ";
    std::cin >> y;

    double distance = calculatedDistance(x,y);
    std::cout << "Odleglosc to: " << distance << '\n';
}

void CoordinateTestVersion2()
{
    Point userPoint;

    std::cout << "Podaj x: ";
    std::cin >> userPoint.x;

    std::cout << '\n';

    std::cout << "Podaj y: ";
    std::cin >> userPoint.y;

    std::cout << '\n';

    double distance = calculatedDistance(userPoint.x, userPoint.y);
    std::cout << "Odleglosc to: " << distance << '\n';
}

int main()
{
    CoordinateTestVersion1();
    CoordinateTestVersion2();
}
