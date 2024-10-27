#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void setInfo(const string& n, int r) {
        name = n;
        roll = r;
    }

    void getInfo() {
        cout << name << roll <<endl;
        cout  << endl;
    }
};

class Test : public Student {
protected:
    float maths, physics;

public:
    void setMarks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }

    void getMarks() {
        cout << "Maths= " << maths << endl;
        cout << "Physics= " << physics << endl;
    }
};

class Result : public Test {
public:
    void display() {
        getInfo();
        getMarks();
        cout << "Percentage: " << (maths + physics) / 2 << endl;
    }
};

int main() {
    Result student;
    student.setInfo("Rizvi ", 29);
    student.setMarks(90.0, 87.5);
    student.display();

    return 0;
}
