#include<stdio.h>
int main()
{
    char name[100];
    int i,n, age, phonenumber;

    FILE *file;
    file = fopen("E:\\Apps & Software & Others\\Practice\\C\\Others\\File\\student.txt", "a");

    if(file==NULL)
    {
       
        printf("File doesn't exist");
    }

    else 
    {
       printf("File is Opended\n");

       printf("Enter the value of n :");
       scanf("%d",&n);

       for(i=0; i<n; i++){

        printf("Enter the student name :");
         fflush(stdin);
       gets(name);
      


       printf("Enter the student age:");
       scanf("%d",&age);

       printf("Enter the student phonenumber:");
       scanf("%d",&phonenumber);


       fprintf(file, "\n%s\t\t%d\t\t%d",name,age,phonenumber);
     
       }


    printf("File is created successfully");
    
    fclose(file);
    }
    
    return 0;

} 