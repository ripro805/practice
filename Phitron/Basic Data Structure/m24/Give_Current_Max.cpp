#include <bits/stdc++.h>
using namespace std;


class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class comparator
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll; 
        }
        return a.marks < b.marks; 
    }
};




int main()
{
    priority_queue<Student, vector<Student>, comparator> pq;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        int roll, marks;
        cin >> roll >> marks;

        pq.push(Student(name, roll, marks));
    }
    int q;
    cin>>q;
    while(q--){
    	int command;
    	cin>>command;
    	if (command == 1) {
            
            if (!pq.empty()) {
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            }
            else{
            	cout << "Empty" << endl;
            }
        }
        else if (command == 2) { 
        	if (!pq.empty()){
        		pq.pop();
        	}
        	
            if (!pq.empty()) {
                Student topStudent = pq.top();
                cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
            }
            else {
                cout << "Empty" << endl;
            }
        }
        else{
        	string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            if (!pq.empty()) {
                    Student topStudent = pq.top();
                    cout << topStudent.name << " " << topStudent.roll << " " << topStudent.marks << endl;
                }
                else {
                    cout << "Empty" << endl;
                }
        }
    }

    return 0;
}