#include <iostream>
using namespace std;

class example
{
private:
    int x, y;

public:
    example()
    {
        x = 10;
        y = 20;
    }
    example(int a, int b)
    {

        x = a;
        y = b;
    }
    void display()
    {
        cout << "Value after initialization: " << endl;
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
    }
};

int main()
{
    example obj1, obj2(30, 40);

    cout << "Default Constructor:" << endl;
    obj1.display();

    cout << "Parameterized Constructor:" << endl;
    obj2.display();
}