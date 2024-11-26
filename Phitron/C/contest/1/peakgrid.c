#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int gd[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&gd[i][j]);
        }
    }
    int peakcount=0;
    
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           int crnt=gd[i][j];
           int ispeak=1;
           if(i>0 && gd[i-1][j]>=crnt){
            ispeak=0;
           }
           if(i<n-1 && gd[i+1][j]>=crnt){
            ispeak=0;
           }


           if(j>0 && gd[i][j-1]>=crnt){
            ispeak=0;
           }
           
           if(j<n-1 && gd[i][j+1]>=crnt){
            ispeak=0;
           }
           if(ispeak){
            peakcount++;
            printf("%d %d\n",i+1,j+1);
            
           }
        }
    }
    printf("%d\n",peakcount);
    

    return 0;
}
