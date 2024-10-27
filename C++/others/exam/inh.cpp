#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Shape
{
public:
    virtual float area() = 0;
};
class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }
    float area() override
    {
        return M_PI * radius * radius;
    }
};
class Square : public Shape
{
private:
    float side;

public:
    Square(int s)
    {
        side = s;
    }

    float area() override
    {
        return side * side;
    }
};

int main()
{
    Shape *shape1 = new Circle(6.0);
    Shape *shape2 = new Square(8.0);

    cout << "Area of the shape 1(circle) : " << shape1->area() << endl;
    cout << "Area of the shape 2(square) : " << shape2->area() << endl;

    delete shape1;
    delete shape2;
}