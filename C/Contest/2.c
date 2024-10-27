#include<stdio.h>
int main()
{
    int i,n,num[100],max;

    scanf("%d",&n);

    for(i=0 ; i<n ; i++)
    {
      scanf("%d",&num[i]);
    }
      max=num[0];


    for(i=0 ; i<n ; i++)
    {
        if(num[i]>max)
        {
            printf("%d\n",num[i]);
        }
    }
    return 0;
}
