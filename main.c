#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter the three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3){
            printf("%d is bigger \n",num1);
            if(num2>num3){
                printf("%d is middle \n %d is smaller ",num2,num3);
            }
            else{
                printf("number %d is middle\n %d is smaller",num3,num2);
            }
    }


    if(num2>num1 && num2>num3){
            printf(" %d is bigger \n",num2);
            if(num1>num3){
                printf("%d is middle\n %d is smaller",num1,num3);
            }
            else{
                printf(" %d is middle\n %d is smaller",num3,num1);
            }
    }


    if(num3>num1 && num3>num2){
            printf("%d is bigger\n",num3);
            if(num1>num2){
                printf("%d is middle \n",num1);
            }
            else{
                printf("%d is middle \n %d is smaller\n",num2,num1);
            }
    }

    getch();

    return 0;
}
