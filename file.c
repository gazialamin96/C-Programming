#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
int main()
{
   char sentence[1000];
   FILE *fptr;

   fptr = fopen("program.txt", "w");


   printf("Enter a sentence:\n");
   gets(sentence);

   fprintf(fptr,"%s", sentence);

   puts(sentence);

   fclose(fptr);
   getch();
   return 0;
}
