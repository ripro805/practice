#include<stdio.h>
int main()
{   
    char ch[40];

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
            fgets(ch,39, file);
            printf("%s",ch);
        }
          fclose(file);
        
     
    
    
    }
    return 0;
}