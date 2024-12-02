#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;

    Student() {
        id = 0;
        name = "";
        section = ' ';
        cls = 0;
        math_marks = 0;
        eng_marks = 0;
        total_marks = 0;
    }

    Student(string name, int cls, char section, int id, int math_marks, int eng_marks) {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->id = id;
        this->math_marks = math_marks;
        this->eng_marks = eng_marks;
        this->total_marks = math_marks + eng_marks; 
    }

    void display() const {
        cout << name << " " << cls << " " << section << " " << id
             << " " << math_marks << " " << eng_marks << endl;
    }
};

bool cmp(const Student &l, const Student &r) {
    if (l.total_marks == r.total_marks) {
        return l.id < r.id;  
    }
    return l.total_marks > r.total_marks; 
}

int main() {
    int N;
    cin >> N;

    Student students[N];  

    for (int i = 0; i < N; ++i) {
        string nm;
        int cls, id, math_marks, eng_marks;
        char s;
        cin >> nm >> cls >> s >> id >> math_marks >> eng_marks;
        students[i] = Student(nm, cls, s, id, math_marks, eng_marks); 
    }

    sort(students, students + N, cmp);

    for (int i = 0; i < N; ++i) {
        students[i].display(); 
    }

    return 0;
}
