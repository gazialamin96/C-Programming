#include <stdio.h>
#include<conio.h>
int main()
{
    char strg[100];
    char toSearch;
    int i, count=0;


    printf("Enter any string: ");
    gets(strg);

    printf("Enter any character to search: ");
    toSearch = getchar();


    for(i=0; strg[i] != '\0'; i++)
    {

        if(strg[i] == toSearch)
        {
            count++;
        }


    }

    printf("Total occurrence of '%c' = %d", toSearch, count);
    getch();
    return 0;
}
