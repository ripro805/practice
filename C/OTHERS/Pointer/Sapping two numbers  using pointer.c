#include<stdio.h>
void swapping(int *ptr1, int *ptr2)
{ 
    int temp;
  temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
}
int main()
{
    int x=2, y=3;
    
   printf("Before Swapping: x=%d , Y=%d\n",x,y);
   swapping(&x,&y);

    printf("After Swapping: x=%d , Y=%d\n",x,y);


}