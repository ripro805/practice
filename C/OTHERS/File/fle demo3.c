#include<stdio.h>
int main()
{   char name[30];
    FILE *file;
    file=fopen("E:\\Apps & Software & Others\\Practice\\C\\Others\\File\\Dream.txt","a");

    if(file==NULL){
    printf("File doesn't exist");
    }
    else 
    {
       printf("File is opended\n");
       printf("Enter the text :");
       gets(name);
       fputs(name,file);
       fputs("\n",file);
       printf("File is created successfully");
    
    fclose(file);
    }
    return 0;
}