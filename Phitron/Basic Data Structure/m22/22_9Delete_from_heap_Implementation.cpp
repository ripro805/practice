#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
void insert_heap(vector<int> &v, int val)
{
    v.push_back(val);
    int cur_indx = v.size() - 1;
    while (cur_indx != 0)
    {
        int par_indx = (cur_indx - 1) / 2;

        if (v[par_indx] < v[cur_indx])
            swap(v[par_indx], v[cur_indx]);
        else
            break;
        cur_indx = par_indx;
    }
}
void print_heap(vector<int>& v) {
    for (auto x : v) {
        cout << x << " ";
    }
    cout << nl; 
}
void delete_heap(vector<int>&v){
    v[0]=v.back();
    v.pop_back();
    int curr_indx=0;
    while(true){
        int  left_indx=(curr_indx*2)+1;
    int  right_indx=(curr_indx*2)+2;
    int left_val=INT_MIN,right_val=INT_MIN;

    if(left_indx<v.size())
        left_val=v[left_indx];


      if(right_indx<v.size())
        right_val=v[right_indx];


        if(left_val>right_val && left_val>v[curr_indx])
       {
         swap(v[left_indx],v[curr_indx]);
        curr_indx=left_indx;
       }
       else   if(right_val>left_val && right_val>v[curr_indx])
       {
         swap(v[right_indx],v[curr_indx]);
        curr_indx=right_indx;
       }
   else{
    break;
   }
    }
}
int32_t main()
{
    faster;
    int n;
    cin >> n;
    vector<int> v;
  
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        insert_heap(v, val);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);

    return 0;
}