#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    Student()
    {
        id = 0;
        name = "";
        section = ' ';
        cls = 0;
    }

    Student(string name, int cls, char section, int id)
    {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->id = id;
    }

    void display() const
    {
        cout << name << " " << cls << " " << section << " " << id << endl;
    }
};

int main()
{
    int N;

    
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; ++i)
    {
        string nm;
        int cls, id;
        char s;
        cin >> nm >> cls >> s >> id;
        students[i] = Student(nm, cls, s, id);
    }

    for (int i = 0; i < N / 2; ++i)
    {

        swap(students[i].section, students[N - i - 1].section);
    }

    for (int i = 0; i < N; ++i)
    {
        students[i].display();
    }

    return 0;
}
