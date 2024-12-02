#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
class Cricketer{
    public:
    int jersey;
    string country;
    Cricketer(int jersey, string country)
    {
        this->jersey=jersey;
        this->country=country;
    }
};
int32_t main()
{
    faster;
   Cricketer *dhoni=new Cricketer (11,"India");
   Cricketer *kohli=new Cricketer (10,"India");
    //kohli=dhoni; //it's not work after deletion. it change the pointer 

    // kohli->country=dhoni->country; // it's difficult for more input. it copy one by one
    // kohli->jersey=dhoni->jersey;

    //best way
    *kohli=*dhoni; // it copy the total input
    delete dhoni;

    cout<<kohli->country<<" "<<kohli->jersey<<endl;
    return 0;
}