#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    int flag = 1;
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && m[i][j]!=0)
            {   
                flag= 0;
                break;
                
                }
                if (i == j && m[i][j] != 1) 
            {
                flag = 0;
                break;
            } 
        }
        if (flag == 0)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }

    
    else
    {
         printf("NO\n");
    }

    return 0;
}