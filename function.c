#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int aiub(){
    printf("Welcome to our new campus \n");
    int faculty(){
        printf("Meet our nicest faculties \n");
    }
    faculty();
}

int pl_1(){
    printf("Hello programming language 1\n");
}
//integer value send
int sum(int a,int b){
    printf("Enter the value of a and b :\n");
    scanf("%d\n%d",&a,&b);

    int sum=a+b;
    printf("sum of a and b is =%d\n",sum);
    int z=8;
    printf("\n%d\n",z);
}

//character input
char string_input(char name[50]){
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
}
//array
int arr(){
    int k[5]={1,2,3,4,5};
    int sum=0;
    int l,m,avg;
    for(l=0;l<=4;l++){
        sum+=l;
    }
    avg=sum/4;
    printf("\naverage of array is =%d",avg);

}
int main()
{
    aiub();
    pl_1();

    int a,b;
    int z=6;
    sum(a,b);
    printf("%d",z);
    char name[50];
    string_input(name);

     arr();

    getch();
    return 0;
}
