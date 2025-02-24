#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class Edge{
   public:
   int a,b,c;
   Edge(int a,int b,int c){
    this->a=a;
    this->b=b;
    this->c=c;
   }
};
int dis[1005]; 
vector<Edge>ed_list;
int n,e;
void bellman_ford(){                                                 //total O(VE)
    for(int i=0;i<n-1;i++){       //O(V)
        for(auto ed: ed_list)     //O(E)           
       {
        int a,b,c;
        a=ed.a;
        b=ed.b;
        c=ed.c;
    
        if( dis[a]!=INT_MAX&&dis[a]+c<dis[b]){
            dis[b]=dis[a]+c;
        }
       }
       }
        // detect cycle
       bool cycle=false;
       for(auto ed: ed_list)     //O(E)           
       {
        int a,b,c;
        a=ed.a;
        b=ed.b;
        c=ed.c;
    
        if( dis[a]!=INT_MAX&&dis[a]+c<dis[b]){
            cycle=true;
            break;
        }
       }
       if(cycle) cout<<"Negative weighted cycle detected"<<nl;
       else{
        for(int  i=0;i<n;i++){
            cout<<i<<" -> "<<dis[i]<<nl;
           }
       }
}
int32_t main()
{
    faster;
   
   cin>>n>>e;
   
   while(e--){
    int a,b,c;
    cin>>a>>b>>c;
    ed_list.push_back(Edge(a,b,c));

   }

   for(int i=0;i<n;i++){
    dis[i]=INT_MAX;
   }

   dis[0]=0;
   bellman_ford();
   
  
    return 0;
}