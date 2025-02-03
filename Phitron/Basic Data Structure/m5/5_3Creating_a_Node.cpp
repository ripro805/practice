#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class Node {
  public:
  int val; 
  Node* next; 

};
int32_t main()
{
    faster;
    Node a,b,c;
    a.val=10;
    b.val=20;
    c.val=30;

    a.next=&b;
    b.next=&c;
    c.next=NULL;

    cout<<a.val<<nl;
    cout<<a.next->val<<endl;//b
    cout<<a.next->next->val<<endl;//c
    



    return 0;
}