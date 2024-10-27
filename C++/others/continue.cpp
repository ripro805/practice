#include <iostream>
using namespace std;
int main()
{
    int date;
    int pktmny=3000;
    cin >> date;
    while (date <= 30)
    {
        if (date % 2 == 0)
        {
            continue;
       

        }
        else{

        if (pktmny==0)
        {
            break;
        }
        pktmny-=300;
       
        }
        date++;
        cout << "Go out today!" << endl;
        
        cout<<pktmny<<endl;
    }
   

    return 0;
}