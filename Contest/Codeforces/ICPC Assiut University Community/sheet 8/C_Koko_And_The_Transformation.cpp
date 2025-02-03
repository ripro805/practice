#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
  int n,m;
  cin>>n>>m;
  vector<int>a(n),b(m);
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
    for(int i=0;i<m;i++){
    cin>>b[i];
  }
  int sum_a=0,sum_b=0;
   for(int i=0;i<n;i++){
    sum_a+=a[i];
  }

      for (int i = 0; i < m; ++i) {
        sum_b += b[i];
    }

    if (sum_a == sum_b) {
        cout << "Yes" << endl;
      
    }
    else {
		cout<<"No"<<endl;
	}
    return 0;
}