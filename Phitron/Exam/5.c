#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int num;
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long int mul = a * b * c;
        long long res = m / mul;
        long long div = m % mul;
        if (div)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n", res);
        }
    }
    return 0;
}
