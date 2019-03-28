#include<stdio.h>

void change_callby_value(int num){
    printf("Before adding value inside function num=%d \n",num);
    num=num+100;
    printf("After adding value inside function num=%d \n", num);
}

void change_callby_referance(int *num) {
    printf("Before adding value inside function num=%d \n",*num);
    *num += 100;
    printf("After adding value inside function num=%d \n", *num);
}

int main() {
    int x=100;
    printf("Call by value : \n");
    change_callby_value(x); //passing value in function

    printf("call by reference : \n");
    change_callby_referance(&x); //passing reference in function
return 0;

}
