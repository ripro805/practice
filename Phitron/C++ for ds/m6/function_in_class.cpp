#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class Student {
 public:
 string name;
 int roll;
 int math;
 int english;
 Student(string name, int roll,int math, int english){
    this->name=name;
    this->roll=roll;
    this->math=math;
    this->english=english;
 }

 void hello()
 {
    cout<<"Hello from "<<name<<endl;
 }
 void Total_marks()
 {
    cout<<"Total marks of "<<name<<" : "<<math+english<<endl;
 }
};


int32_t main()
{
    faster;

    Student rizvi("Rifat Rizvi",1,99,92);
    rizvi.hello();
    rizvi.Total_marks();

    Student prova("Sadia Prova", 2, 93,96);
    prova.hello();
    prova.Total_marks();
    
    return 0;
}