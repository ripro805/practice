#include<stdio.h>
#include<string.h>
int main()
{
    int len;
  char str1[100];
char str2[100];
char str3[1000];
printf("Enter a string  :");
gets(str1);

printf("Enter another string  : ");
gets(str3);


//length
 len=strlen(str1);
printf("Length=%d\n",len);

len=strlen(str3);
printf("Length=%d\n",len);






// copy
strcpy(str2,str1);

printf("Copy string=%s\n",str2);

//catnation
strcat(str1,str3);
printf("Catnation string 1=%s\n",str1);





// compare

int d=strcmp(str1,str3);
if(d==0)
{
    printf("Both are same\n");
}
else
    printf("Both are not same\n");


//reverse

strrev(str1);
printf("Reversed string =%s\n",str1);


}

