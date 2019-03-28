/*C program to print following Pyramid:
*
**
***
****
*****
*/
   
#include<stdio.h>
   
#define MAX 5
 
int main()
{
    int i,j;
 
    for(i=0; i< MAX; i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



/*C program to print following Pyramid:
*****
****
***
**
*
*/

#include<stdio.h>

#define MAX	5

int main()
{
	int i,j;

	for(i=MAX; i>=0; i--)
	{
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
    return 0;
}



/*C program to print following Pyramid:
        *
       * *
      * * *
     * * * *
    * * * * *
*/

#include<stdio.h>

#define MAX	5

int main()
{
    int i,j;
    int space=4;
    /*run loop (parent loop) till number of rows*/
    for(i=0;i< MAX;i++)
    {
	    /*loop for initially space, before star printing*/
	    for(j=0;j< space;j++)
	    {
		    printf(" ");
	    }
	    for(j=0;j<=i;j++)
	    {
		    printf("* ");
	    }
		
	    printf("\n");
	    space--;	/* decrement one space after one row*/
    }
    return 0;
}

/*C program to print following Pyramid:
        0
       01
      010
     0101
    01010
*/

#include<stdio.h>

int main()
{
	int i,j,k;
	
	for(i=0 ; i<=4 ; i++)
	{
		for(j=4 ; j>i ; j--)
			printf(" ");

		for(k=0 ; k<=i; k++)
		{
			if(k%2==0)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
    
    return 0;
}

/*C program to print following Pyramid:
        1
       123 
      12345
     1234567 
    123456789
*/

#include<stdio.h>

int main()
{
	int i,j,k,l=1;
	for(i=1; i<=5; i++)
	{
		for(j=4; j>=i; j--)
		{
			printf(" ");
		}
		
		for(k=1; k<=l; k++)
		{ 
			printf("%d",k);
		}            
			l = l+2;    
	    printf("\n");
	}
    return 0;
}
