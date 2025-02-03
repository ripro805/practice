//vector is a template library
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    //vector <int>v; //type 1 size 0 because 0 elements  O(1)
    //vector<int>v(10);//type 2 size 10 because 10 elements O(10)
    vector<int>v(10,-1);//type 3 Construct a vector with 10 elements and the value will be -1. O(10)
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
   cout<<nl;
    vector<int>v2(v);//type 4 Construct a vector by copying another vector v2. O(10)
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<nl;
    cout<<v.size()<<endl;
    int arr[5]={1,2,3,4,5 };//type 5 Construct a vector by copying all elements from an array A of size N.O(N)
    vector<int>v3(arr,arr+5);
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    cout<<nl;
    vector<int>v4={1,2,3,4,5,6};//type 6 INITIALIZE ARRAY DIRECTLY IN VECTOR..O(N)
    for(int i=0;i<v4.size();i++){
        cout<<v4[i]<<" ";
    }
    cout<<nl;
    return 0;
}