#include <stdio.h>

int main()
{
    char line[100];
    int i, vowels,spaces;

    vowels = spaces = 0;

    printf("Enter a line of string: ");
    scanf("%[^\n]", line);

    for(i=0; line[i]!='\0'; ++i)
    {
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++vowels;
        }

        else if (line[i]==' ')
        {
            ++spaces;
        }
    }

    printf("Vowels: %d",vowels);
    printf("\nWhite spaces: %d", spaces);

    return 0;
}
