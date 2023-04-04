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
double calculatedDistance(Point p)
{
    double distance = sqrt(p.x *p.x + p.y * p.y);
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

    std::cout << "Podaj y: ";
    std::cin >> userPoint.y;

    double distance = calculatedDistance(userPoint.x, userPoint.y);
    std::cout << "Odleglosc to: " << distance << '\n';
}

int main()
{
    CoordinateTestVersion1();
    CoordinateTestVersion2();
}

struct Person
{
    std::string name;
    std::string surname;
    int age;
    int hight;
};

Person p1;
//p1.name

std::string nameTab[5];
std::string surnameTab[5];
int ageTab[5];
int hightTab[5];

Person pTab[5];
//pTab[1].name = "Ala";