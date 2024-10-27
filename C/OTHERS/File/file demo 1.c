#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("E:\\Apps & Software & Others\\Practice\\C\\Others\\File\\test.txt","w");

    if(file==NULL){
    printf("File doesn't exist");
    }
    else 
    {
        printf("File is created");
    }
    fclose(file);
}