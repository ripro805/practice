#include<iostream>
using namespace std;

class shape {
public:
    int width, height;

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }
};

class rectangle : public shape {
private:
    float a;

public:
    void setA() {
        a = (float)(width * height);
    }

    void showA() {
        cout << "Area: " << a << endl;
    }
};

int main() {
    rectangle myRectangle; // Create an object of the rectangle class
    myRectangle.setHeight(2);
    myRectangle.setWidth(3);
    myRectangle.setA();
    myRectangle.showA();
    return 0;
}
