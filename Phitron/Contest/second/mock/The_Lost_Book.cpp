#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int n;
    cin >> n;  

    vector<int> book_code(n);
    vector<pair<int, int>> found_book(n);  
    for (int i = 0; i < n; i++) {
        cin >> book_code[i];  
        found_book[i] = {book_code[i], i}; 
    }

    sort(found_book.begin(), found_book.end());

    int tar;
    cin >> tar;  

   
    for (int i = 0; i < n; i++) {
        if (found_book[i].first == tar) {
            cout << found_book[i].second << nl;  
            return 0;  
        }
    }

    cout << -1 << nl; 
    return 0;
}