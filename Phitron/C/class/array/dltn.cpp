 #include <bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 #define nl "\n"
 
 #define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

 int32_t main()
 {    
     int length;
     cin>>length;
     int a[10000];
     for(int i=0;i<length;i++){
        cin>>a[i];
     }
     int indx;
     cin>>indx;
     for(int i=indx;i<length-1;i++){
        a[i]=a[i+1];
     }
     length--;
      for(int i=0;i<length;i++){
        cout<<a[i]<<" ";
      }
     return 0;
 }
 