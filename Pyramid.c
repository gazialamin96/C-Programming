#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,space,MAX;
    printf("Enter the number of space you want : ");
    scanf("%d",&space);

    printf("Enter max number of row you want : ");
    scanf("%d",&MAX);

    for(i=0;i< MAX;i++)
    {
	    for(j=0;j< space;j++)
	    {
		    printf(" ");
	    }

	    for(j=0;j<=i;j++)
	    {
		    printf("* ");
	    }

	    printf("\n");
	    space--;
    }

    getch();
    return 0;
}