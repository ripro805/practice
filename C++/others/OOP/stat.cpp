#include <iostream>
using namespace std;

class Employee
{
    int id;
    //count is the static data member of class employee
    static int count;

public:
    void setData(void)
    {

        cout << "Enter the id : ";
        cin >> id;
        count ++;
    }

    void getData(void)
    {
        cout << "The id is " << id << " and the number is " << count << endl;
    }

    static void  getCount (void)
    {
        cout<<"The value of count is " <<count<<endl;
    }
};

int Employee::count = 1000;

int main()
{
    Employee Rizvi, Prova, Ayat;

    Rizvi.setData();
    Rizvi.getData();
    Employee :: getCount();

    Prova.setData();
    Prova.getData();
    Employee :: getCount();

    Ayat.setData();
    Ayat.getData();
    Employee :: getCount();

    return 0;
}