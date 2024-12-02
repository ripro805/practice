#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nl "\n"
#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

class Student {
public:
    int id;
    string name;
    char section;
    int marks;
    Student(){
        id = 0;
        name = "";
        section=' ';
        marks = -1;
    }
    Student(int id, string name, char section, int marks) {
        this->id = id;
        this->marks = marks;
        this->name = name;
        this->section = section;
    }

    bool isBetterThan(const Student &other) const {
        if (this->marks > other.marks) {
            return true;
        }
        if (this->marks == other.marks && this->id < other.id) {
            return true;
        }
        return false;
    }
};

int32_t main() {
    faster;
    int t;
    cin >> t;

     
    while (t--) {
        Student students[3];

        for (int i = 0; i < 3; i++) {
            int id, marks;
            string name;
            char section;

            cin >> id;

             
            cin>>name;

            cin >> section >> marks;

            students[i] = Student(id, name, section, marks);
        }

       
        Student best_st = students[0];
        for (int i = 1; i < 3; i++) {
            if (students[i].isBetterThan(best_st)) {
                best_st = students[i];
            }
        }

       
        cout << best_st.id << " " << best_st.name << " "
             << best_st.section << " " << best_st.marks << endl;
    }

    return 0;
}
