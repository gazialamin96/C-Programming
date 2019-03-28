#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[2][2]={4,5,2,1};
    int i,j,avg;
    int count=0;


printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<2;j++) {
         count+= A[i][j];
      }
   }
   avg=count/4;
   printf("%d",avg);
    return 0;
}