#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;

    char name[20];
    printf("Enter a name : ");
    gets(name);

    int length = strlen(name);
    int i;
    file=fopen("E:\\Apps & Software & Others\\Practice\\C\\Others\\File\\test.txt","a");

    if(file==NULL){
    printf("File doesn't exist");
    }
    else 
    {
        printf("File is opended\n");
        
        for(i=0; i<length; i++){
        fputc(name[i],file);
            
        }
        printf("File is created successfully\n");
        fclose(file);
    }
    return 0;
    
}