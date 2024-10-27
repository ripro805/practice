#include <iostream>
using namespace std;
int main()
{
    int date;
    cin >> date;
    int p_money = 3000, i;
    for (i = 1; i <= date and date<=30; i++)
    {
        if (!(i % 2))
            continue;
        else
        {
            if (p_money <= 0)
                break;
            p_money -= 300;
        }
    }
    if (p_money > 0)
        cout << "Go out today " << date << " with " << p_money << " of money" << endl;

    return 0;
}