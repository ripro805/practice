#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n,q;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>q;
    sort(arr.begin(), arr.end());
    while (q--)
    {
        int val;
        cin >> val;
        int flag = 0;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == val)
            {
                flag = 1;
                break;
            }
            else if (arr[mid] > val)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (flag == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}