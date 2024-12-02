#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class Student
{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int32_t main()
{
    faster;
    Student s1 ("Rizvi",1,'A',92,9);
    Student s2 ("Prova",2,'B',99,8);
    Student s3 ("Ripro",12,'C',82,10);
    Student top_st=s1;
    if(s2.math_marks>top_st.math_marks){
        top_st=s2;
    }
    if(s3.math_marks>top_st.math_marks){
        top_st=s3;
    }
    cout<<top_st.name<<endl;

    return 0;
}