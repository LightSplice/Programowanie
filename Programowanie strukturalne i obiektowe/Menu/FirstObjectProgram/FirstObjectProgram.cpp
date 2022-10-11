
#include <iostream>

class Point
{
public:

	//metoda konstruktora obiektu
	Point()
	{
		x = 0;
		y = 0;
	}

	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	double CalculateDistance()
	{
		double distance = sqrt(x * x + y * y);
		return distance;
	}

	void SetX(int x)
	{
		//zak³adamy ¿e jesteœmy tylko w pierwszej æwiartce uk³adu XY
		if (x >= 0)
			this->x = x;
	}

	void SetY(int y)
	{
		//zak³adamy ¿e jesteœmy tylko w pierwszej æwiartce uk³adu XY
		if (y >= 0)
			this->y = y;
	}

protected:

private:
	int x;
	int y;
};

int main()
{
	int x;
	std::cout << "Podaj x\n";
	std::cin >> x;

	Point point2;
	Point point(x, 15);
	//point.x = 10;
	//point.SetX(10);
	//point.SetY(15);
	double distance = point.CalculateDistance();
	std::cout << "Dystans od punktu (0;0) = " << distance << "\n";

}