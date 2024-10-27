#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string name;
    int age;

public:
    void set_value(string n, int a)
    {
        name=n;
        age = a;
    }
    void display()
    {
        cout << "Name of the animal is: " << name << ". Age is: " << age << "." << endl;
    }
};

int main()
{
    Animal Zebra, Dolphin;
    Zebra.set_value("Zebra", 20);
    Dolphin.set_value("Dolphin", 35);

    Zebra.display();
    Dolphin.display();
}