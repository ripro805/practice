#include<stdio.h>
#include<stdlib.h>

int main ()
{
    FILE *file1;

    file1=fopen("randomaccess.txt","w+");

    fprintf(file1, "Hello world!");

    rewind(file1);

    char ch;

    while(fscanf(file1,"%c",&ch)==1){

      
        printf("%c",ch);
    }


    printf("\n \n");

    //rewind(file1);

    //fseek(file1,0,0);

    //fseek(file1,-6,2);
    fseek(file1,6,0);

    int l=ftell(file1);
     printf("\nCurrent Position=%d\n",l);

  while(fscanf(file1,"%c",&ch)==1){

        if(feof(file1))
        break;
    

        printf("%c",ch);

  }        
    

     

    

     fseek(file1,-2,1); //1 means current position

     ch=getc(file1); //using getc for read one char

     printf("\n%c",ch);

    return 0;
}