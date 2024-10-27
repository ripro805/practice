#include<stdio.h>
int main()
{   int age;
    char name[30];
    FILE *file;
    file=fopen("E:\\Apps & Software & Others\\Practice\\C\\Others\\File\\Intro.txt","a");

    if(file==NULL){
    printf("File doesn't exist");
    }
    else 
    {
       printf("File is opended\n");
       printf("Enter your :");
       gets(name);
       printf("Enter your age : ");
       scanf("%d",&age);

       fprintf(file,"Name= %s\n Age=%d\n", name,age);
       
       printf("File is created successfully");
    
    fclose(file);
    }
    return 0;
}