#include<stdio.h>
enum days_of_week
{
    Sun,Mon,Tue,Wed,Thurs,Fri,Sat
};

int main()
{
    enum days_of_week day1,day2;
    day1=Sun;
    day2=Wed;

    printf("Day 1= %d\n",day1);
    printf("Day 2= %d\n",day2);

    int dif=day2-day1;
    printf("Difference= %d\n",dif);
}