#include <stdio.h>
int main()
{
    int a=5,b=6,o=a+b;
    float c=22.222,d=33.999,f=a+c+o;
    char i='A',j='L';//for char
    char chr;
    printf("inter the character ");
    scanf("%c",&chr);
    printf("print the char=%c\n",chr);

    //for input
    int s,u;

    printf("inter the value of s=");
    scanf("%d",&s);
    printf("inter the value of u=");
    scanf("%d",&u);

    printf("print the value of s= %d\n",s);
    printf("print the value of u= %d\n",u);

    //for input floating type
    float g,h;
    printf("inter the value of g= ");
    scanf("%.1f",&g);
    printf("inter the value of h= ");
    scanf("%.1f",&h);

    printf("%d\n%d\n",g,h);

    printf("Welcome!\n");
    printf("Name: Al-Amin\nName of university is : AIUB\nId: 15-30781-3\n");
    printf("Welcome to  AIUB\nWelcome to C programming language\n\n");

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n%d\n",a,b);
    printf("%0.3f\n%0.3f\n",c,d);
    printf("%c\t%c\n",i,j);

    printf("print of a+b= %d\n",o);
    printf("print of addition int and float c= %0.3f\n",f);


    return 0;

}
