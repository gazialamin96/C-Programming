#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time, bill;

    printf("Enter hours parked by the car:\n");
    scanf("%d",&time);
    bill = time*100;
    printf("Total bill is: %d\n", bill);
    return 0;
}