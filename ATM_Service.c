#include <stdio.h>
#include <stdlib.h>
int balance = 10000;
char choice;

void withdraw(){
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);
    if(balance<amount){
            printf("You don't have sufficeant balance to widthdraw .");

    }
    else{

        balance = balance-amount;

        printf("Your new amount after the withdraw is %d",balance);
    }
}

void transfer(){
    int amountt;
    printf("Enter amount to transfer: ");
    scanf("%d", &amountt);
    if(balance<amountt){
            printf("You don't have sufficeant balance to transfer .");

    }
    else{

        balance = balance-amountt;

        printf("Your new amount after the withdraw is %d",balance);
    }
}

void statement(){
    printf("\n YOUR BALANCE IN Rs : %lu ", balance);

}


int main()
{
    int amount=1000,choice;

    printf("**Welcome to ATM Service**\n");
    printf("1. Withdraw Cash\n");
    printf("2. transfer Cash\n");
    printf("3. statement Balance\n");
    printf("4. Quit\n");


    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
		{

		case 1:
		    withdraw();
			break;

        case 2:
            transfer();
			break;

		case 3:
		    statement();
			break;

		case 4:
			printf("\n THANK U USING ATM");
			break;

		default:
			printf("\n INVALID CHOICE");
		}

    return 0;
}