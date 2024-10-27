#include<stdio.h>
void printstring(char arr[])
{
    for(int i=0 ; arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }

}
int count=0;

int countlength(char arr[])
{
    for(int i=0 ; arr[i]!='\0';i++)
    {
        ++count;
    }

    return count-1;
}








int main()
{
    char name[100];
    fgets(name,100,stdin);
    puts(name);

    printf("length=%d\n",countlength(name));

}