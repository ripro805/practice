#include<stdio.h>
int main()
{   int x,y;
    FILE *file1 , *file2;
    file1=fopen("E:\\Practice\\C\\Others\\File\\output\\classwork.txt","r");

    if(file1==NULL){
    printf("File doesn't exist");
    exit (0);
    }
   
       printf("File is opended\n");
       
       fscanf(file1,"%d %d",&x,&y);

       printf("\n%d+%d=%d",x,y,x+y);


       file2=fopen("Out.txt","w");

       fprintf(file2,"\n%d+%d=%d",x,y,x+y);

       fclose(file1);
       fclose(file2);


       
       
    
    return 0;
}