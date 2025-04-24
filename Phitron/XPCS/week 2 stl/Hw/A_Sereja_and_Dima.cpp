#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    deque<int> cards(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }
   
    int s = 0, d = 0, mx;
    int turn = 1;

    while (!cards.empty())
    {
        int l = cards.front(), r = cards.back();

        mx = max(l, r);
        if (turn % 2 != 0)
        {
            s += mx;
        }
        else
        {
            d += mx;
        }
        if (mx == l)
        {
            cards.pop_front();
        }
        else
        {
            cards.pop_back();
        }
        turn++;
    }
    cout << s << " " << d << endl;

    return 0;
}
