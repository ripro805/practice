#include <iostream>
using namespace std;

int main()
{
    int money;
    cin >> money;

    if (money >= 10000)
    {
        cout << "Prova" << endl;

        if (money > 12000)
        {
            cout << "Restaurant" << endl;
        }

        else

        {
            cout << "Badam" << endl;
        }
    }
    else if (money > 6000)
    {
        cout << "Fariya" << endl;
    }
    else if (money >3000)
    {
        cout << "Fakiha" << endl;
    }

    else
    {
        cout << "Raisa" << endl;
    }

    return 0;
}
