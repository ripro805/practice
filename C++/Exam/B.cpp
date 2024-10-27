#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int num)
{
    int reversed = 0;
    while (num != 0)
    {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    return reversed;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int reversedNum2 = reverseNumber(num2);

    int sum = num1 + reversedNum2;

    cout << sum << endl;

    return 0;
}
