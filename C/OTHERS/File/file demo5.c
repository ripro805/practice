#include<stdio.h>
int main()
{   
    char ch;

    FILE *file;
    file=fopen("E:\\Apps & Software & Others\\Practice\\C\\Others\\File\\Intro.txt","r");

    if(file==NULL){
    printf("File doesn't exist");
    }
    else 
    {
       printf("File is opended\n");


        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",ch);
        }
     
    
    fclose(file);
    }
    return 0;
}