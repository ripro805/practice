

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int *sort_it(int n)

{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());
    return arr;
}

int32_t main()
{
    faster;
    int n;

    cin >> n;

    int arr[n];

    int *sorted = sort_it(n);

    for (int i = 0; i < n; i++)
    {
        cout << sorted[i] << " ";
    }
    cout << endl;
    delete[] sorted;
    return 0;
}
