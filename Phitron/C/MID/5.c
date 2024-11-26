#include <stdio.h>
#include<string.c>
int main() {
    char s1[1001],s2[1001],s3[1001];
    scanf("%s %s %s",s1,s2,s3);
    char min_string[1001], max_string[1001];
    min_string = s1;
    max_string=s1;

    if(strcmp(s2,min_string)<0){
        min_string=s2;
    }
    if(strcmp(s3,min_string)<0){
        min_string=s3;
    }

    if(strcmp(s2,max_string)){
        max_string=s2;
    }
    if(strcmp(s3,max_string)){
        max_string=s3;
    }
    printf("%s\n",min_string);
    printf("%s\n",max_string);
    return 0;
}