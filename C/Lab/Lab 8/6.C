#include <stdio.h>
int main()
{
    FILE *file1 ,*file2;
    
    
    file1=fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\6. input.txt","r");

    if(file1==NULL){
        printf("File is not found");
        return 0;
    }
    file2=fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\6. Output.txt","w");
    int sum=0;
    while(1){

        int n;
        fscanf(file1,"%d",&n);
      if(n==-1)
      {
        break;
      }
      sum=sum+(n*n);
    }
    fprintf(file2,"Sum=%d\n",sum);

    fclose(file1);
    fclose(file2);

    return 0;

    }