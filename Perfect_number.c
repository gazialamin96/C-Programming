#include<stdio.h>
#include<conio.h>

int main(){
    int num,j,s=0;
    printf("Enter a number:");
    scanf("%d",&num);

    for(j=1;j<num;++j){
        if(num%j==0){
            s=s+j;
        }
    }

    if(s==num){
        printf("%d is a Perfect Number",num);
    }
    else{
        printf("%d is Not perfect number",num);
    }

    getch();
    return 0;
}


