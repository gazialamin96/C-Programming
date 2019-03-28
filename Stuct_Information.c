#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int id;
    char name[50];
    char email[100];
    int phone;
    char dept[50];
    char program[100];
    char address[300];
};

int main()
{
    struct student gazi, alamin;

    printf("1st student info:\n");

    printf("ID: ");
    scanf("%d", &gazi.id);

    printf("\nName:\n");
    scanf("%s", &gazi.name);

    printf("\nPhone:\n");
    scanf("%d", &gazi.phone);

    printf("\nEmail:\n");
    scanf("%s", &gazi.email);

    printf("\Department:\n");
    scanf("%s", &gazi.dept);

    printf("\Program:\n");
    scanf("%s", &gazi.program);

    printf("\Address:\n");
    scanf("%s", &gazi.address);


   printf("2nd student info:\n\n");

    printf("ID:\n");
    scanf("%d", &alamin.id);

    printf("\nName:\n");
    scanf("%s", &alamin.name);

    printf("\nPhone:\n");
    scanf("%d", &alamin.phone);

    printf("\nEmail:\n");
    scanf("%s", &alamin.email);

    printf("\Department:\n");
    scanf("%s", &alamin.dept);

    printf("\Program:\n");
    scanf("%s", &alamin.program);

    printf("\Address:\n");
    scanf("%s", &alamin.address);


    printf("Printing the information of students : \n");
    printf("1st student info:\n");
    printf("ID: %d\n Phone: %d \n name: ", gazi.id, gazi.phone);
    puts(gazi.name);
    printf(" Contact Email:");
    puts(gazi.email);
    printf(" Department:");
    puts(gazi.dept);
    printf(" Program:");
    puts(gazi.program);
    printf(" Address:");
    puts(gazi.address);

    printf("\n");


    printf("2nd student info:\n");
    printf("ID: %d\n Phone: %d\n and name: ", alamin.id, alamin.phone);
    puts(alamin.name);
    printf(" Contact Email:");
    puts(alamin.email);
    printf(" Department:");
    puts(alamin.dept);
    printf(" Program:");
    puts(alamin.program);
    printf(" Address:");
    puts(alamin.address);

    return 0;
}
