#include <stdio.h>
#include <string.h>
///string copy
void scopy()
{
 printf("String copy :\n");
  char s2[ ]= "Hello";
  char s1[10];
  strcpy(s1, s2);
  printf("Source string = %s\n", s2);
  printf("Target string = %s\n", s1);
}

///string compare
void scmp()
{
  printf("String compare :\n");
  char s1[ ]= "Hello";
  char s2[ ]= "World";
  int i, j;
  i = strcmp(s1, "Hello");
  j = strcmp(s1, s2);
  printf("%d\n", i);

}
///string cat
void scat()
{
  printf("String concatination :\n");
  char s2[ ]= "World";
  char s1[20]= "Hello";
  strcat(s1, s2);
  printf("Source string = %s\n", s2);
  printf("Target string = %s\n", s1);
}

///string lenth of the function
void lenfun()
{
  printf("String lenth of the function :\n");
  char name[ ]= "Hello";
  int len1, len2;
  len1 = strlen(name);
  len2 = strlen("Hello World");
  printf("length of %s = %d\n", name, len1);
  printf("length of %s = %d\n", "Hello World", len2);

}

int main()
{
  char name[25];
  printf("Enter your name\n");
  gets(name);
  printf("Your name is ");
  puts(name);

  scopy();
  scmp();
  scat();
  lenfun();

  return 0;
}