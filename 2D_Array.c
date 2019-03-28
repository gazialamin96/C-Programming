#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
   char ch[3][2];
   int i, j,k,l;
   for(i=0; i<3; i++) {
      for(j=0;j<2;j++) {
         printf("Enter value for ch[%d][%d]:", i, j);
         scanf("%s", &ch[i][j]);
      }
   }
   printf("Two Dimensional array elements:\n");
   for(k=0; k<3; k++) {
      for(l=0;l<2;l++) {
         printf("%c",ch[k][l]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}

