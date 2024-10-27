#include <bits/stdc++.h>
using namespace std;

void solve(int t_case)
{
    int n;
    cin >> n;
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    int avg = sum / n;
    avg = avg * 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int an_sum = arr[i] + arr[j];
            if (an_sum > avg)
            {
                cout << an_sum << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}
