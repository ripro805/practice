#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class Node {
  public:
  int val; 
  Node* next; 
  Node(int val)
  {
    this->val=val;
    this->next=NULL;

  }

};
int32_t main()
{
    faster;
    Node a(10),b(20),c(30);
    
    a.next=&b;
    b.next=&c;
  

    cout<<a.val<<nl;
    cout<<a.next->val<<endl;//b
    cout<<a.next->next->val<<endl;//c
    



    return 0;
}