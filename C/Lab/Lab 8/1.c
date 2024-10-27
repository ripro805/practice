#include <stdio.h>
int main()
{
    FILE *file1 ,*file2;
    
    char str[1000];
    file1=fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\1. input.txt","r");

    if(file1==NULL){
        printf("File is not found");
        exit (0);
    }
    file2=fopen("E:\\Apps & Software & Others\\Practice\\C\\Lab\\Lab 8\\1. Output.txt","w");
    
    while(1){
     
      fgets(str,sizeof(str),file1);

        if(feof(file1))
        break;

        fprintf(stdout, "%s",str);
        fputs(str,file2);


    }

    fclose(file1);
    fclose(file2);
}