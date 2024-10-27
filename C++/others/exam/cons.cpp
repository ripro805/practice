#include <iostream>
using namespace std;

class Shape
{
private:
    int width, height;

public:
    Shape(int w, int h)
    {
        width = w;
        height = h;
    }
    float triangle_area()
    {
        return 0.5 * (float)width * height;
    }
    int rectangle_area()
    {
        return width * height;
    }
};

int main()
{
    Shape Triangle(5, 6), Rectangle(8, 9);

    cout << "Area of the triangle is: " << Triangle.triangle_area() << "." << endl;
    cout << "Area of the rectangle is: " << Rectangle.rectangle_area() << "." << endl;
}