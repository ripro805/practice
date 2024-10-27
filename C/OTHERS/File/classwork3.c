#include<stdio.h>
int main()
{   int x,sum=0;
    FILE *file1 ;
    file1=fopen("E:\\Practice\\C\\Others\\File\\output\\classwork3.txt","r");
    

    
       printf("File is opended\n");
       while ((fscanf(file1,"%d",&x))==1) {
        
        sum=sum+x;
        printf("%d\n",x);




       }
       
       

       printf("sum=%d",sum);


       

       fclose(file1);
       


       
       
    
    return 0;
}
