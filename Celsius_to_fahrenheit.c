#include <stdio.h>
#include <stdlib.h>

int main()
{
    int celsius;
    printf("Enter the celsius which convert in fahrenheit :");
    scanf("%d",&celsius);

    float fahrenheit;

    fahrenheit = (celsius*1.8)+32;

    printf("%d degree celsius is %0.1f fahrenheit",celsius,fahrenheit);


    return 0;
}
