#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

int32_t main()
{
    faster;
    int t;
    cin >> t;
    cin.ignore();  
    
    while (t--) {
        string s;
        getline(cin, s);  
        
        stringstream ss(s);
        string word;
        map<string, int> mp, sgmnt;  
        vector<string> order;  
        int i=0;
        while (ss >> word) {
            if (mp[word] == 0) {
                order.push_back(word);
                sgmnt[word]=i++;;
            } else {
                sgmnt[word]=i++;
            }
            mp[word]++;
        }
        
        string mostFrequentWord;
        int maxCount = 0, pos=-1;
        
        for (auto w : order) {
            if (mp[w] > maxCount) {
                mostFrequentWord = w;
                maxCount = mp[w];
                pos=sgmnt[w];
            } else if (mp[w] == maxCount) {
                
                // auto it1 = find(order.begin(), order.end(), w);
                // auto it2 = find(order.begin(), order.end(), mostFrequentWord);
                // if (it1 < it2) {
                //     mostFrequentWord = w;
                // }
                if(sgmnt[w]<sgmnt[mostFrequentWord]){
                    mostFrequentWord = w;
                maxCount = mp[w];
                pos=sgmnt[w];
                }
            }
        }
        
        cout << mostFrequentWord << " " << maxCount << endl;
    }
    
    return 0;
}