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
    int marks;
    Student(string name,int roll,int marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }
};
class cmp{
    public:
    bool operator()( Student l,  Student r){
        if (l.marks>r.marks) return false;
        else return true; // for decessending means large to small ..it is reverse from the normal rules
    }
};
int32_t main()
{
    faster;
    priority_queue<Student,vector<Student>,cmp>pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }

    while(!pq.empty()){
        
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<nl;
        pq.pop();
    }
    
    return 0;
}