#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl "\n"

#define faster ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
int max(vector<int>& arr){
    return *max_element(arr.begin(),arr.end());
}
int min(vector<int>& arr){
    return *min_element(arr.begin(),arr.end());
}
bool isPrime(int num){
    if(num<=1) return false;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0)return false;
    }
    return true;
}
int countPrime(vector<int>&arr){
    int cnt=0;
    for(int num:arr){
        if(isPrime(num)) cnt++;
    }
    return cnt;
}
bool ispalindrome(int num){
    string s = to_string(num);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}
int countPalin(vector<int>&arr){
    int cnt=0;
    for(int num: arr){
        if(ispalindrome(num)) cnt++;
    }
    return cnt;
}

int getMaxDivisors(const vector<int>& arr) {
    int maxDivisors = 0, result = 0;
    for (int num : arr) {
        int divisors = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) divisors++;
        }
        if (divisors > maxDivisors || (divisors == maxDivisors && num > result)) {
            maxDivisors = divisors;
            result = num;
        }
    }
    return result;
}
int32_t main()
{
    faster;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    cout << "The maximum number : " << max(arr) << endl;
    cout << "The minimum number : " << min(arr) << endl;
    cout << "The number of prime numbers : " << countPrime(arr) << endl;
    cout << "The number of palindrome numbers : " << countPalin(arr) << endl;
    cout << "The number that has the maximum number of divisors : " << getMaxDivisors(arr) << endl;

    return 0;
    return 0;
}