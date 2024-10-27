#include<stdio.h>
int main()
{   int x,n,i,sum=0;
    FILE *file1 , *file2;
    file1=fopen("E:\\Practice\\C\\Others\\File\\output\\classwork2.txt","r");
    fscanf(file1,"%d",&n);

    
       printf("File is opended\n");
       for(i=0; i<n; i++){
        fscanf(file1,"%d",&x);
        sum=sum+x;
        printf("%d\n",x);




       }
       
       

       printf("sum=%d",sum);


       

       fclose(file1);
       


       
       
    
    return 0;
}
