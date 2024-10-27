#include<stdio.h>
int main()
{
    int arr1[100] [100],arr2[100] [100] ,arr3[100] [100],i,j,nor,noc;
    
    printf("Enter the no of row and col:");
    scanf("%d %d",&nor,&noc);
   

    printf ("Enter elements for Arr1\n");
    
    for(i=0 ; i<nor; i++){

      for(j=0 ; j<noc; j++)
      {
        printf("Arr1[%d] [%d]=",i,j);
        scanf("%d",&arr1[i] [j]);
      }
      printf("\n");

    }

    

    printf ("Enter elements for Arr2\n");
    
    for(i=0 ; i<nor; i++){

      for(j=0 ; j<noc; j++)
      {
        printf("Arr2[%d] [%d]=",i,j);
        scanf("%d",&arr2[i] [j]);
      }
      printf("\n");

    }
    
    

    printf("Arr1= ");

     for(i=0 ; i<nor; i++){
        printf("\t");

      for(j=0 ; j<noc; j++)
      {
        printf("%d\t",arr1 [i] [j]);

      }

      printf("\n");

     }

      
    printf("Arr2= ");

     for(i=0 ; i<nor; i++){
        printf("\t");

      for(j=0 ; j<noc; j++)
      {
        printf("%d\t",arr2[i] [j]);

      }

      printf("\n");

     }

      for(i=0 ; i<nor; i++){

      for(j=0 ; j<noc; j++)
      {
             arr3 [i] [j] = arr1 [i] [j]+ arr2 [i] [j] ;

      }

      }

      printf("Arr3 :");

      for(i=0 ; i<nor; i++){

        printf("\t");

      for(j=0 ; j<noc; j++)
      {
        printf("%d\t",arr3[i] [j]);

      }

      printf("\n");

     }

     return 0;

}