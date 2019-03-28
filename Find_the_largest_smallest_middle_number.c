#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the value of number a is : ");
    scanf("%d",&a);

    printf("Enter the value of number b is : ");
    scanf("%d",&b);

    printf("Enter the value of number c is : ");
    scanf("%d",&c);

    if(a>b||a>c){
            printf("%d is biggest number\n",a);
            if(b>c){
                printf("%d is middle number\n %d is a smallest number\n",b,c);
            }
            else{
                printf("%d is middle number \n %d is smallest number\n",c,b);
            }

    }
    else if(b>a||b>c){
            printf("%d is biggest number ",b);
            if(a>c){
                printf("%d is a middle number \n %d is smallest number\n",a,c);
            }
            else{
                printf("%d is a middle number \n %d is smallest number\n",c,a);
            }
    }
    else if(c>a||c>b){
            printf("%d is biggest number ",c);
            if(a>b){
                printf("%d is a middle number \n %d is smallest number\n",a,b);
            }
            else{
                    printf("%d is a middle number \n %d is smallest number\n",b,a);

            }
    }
    else{
            printf("you don't enter a number");
    }

    return 0;
}
