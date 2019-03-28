#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct menu{
    int tea ;
    int coffee ;
    int mauntaindew ;
    int seven_up ;
    int tahery ;
    int morog_polaw;
    int veriany ;
    int singara ;
    int chomuca ;
    int chiken_roll ;
    int vegitable_roll;
};

int main()
{

    struct menu drinks,foods;
    drinks.tea = 20;
    drinks.coffee = 30;
    drinks.mauntaindew = 25;
    drinks.seven_up = 20;
    foods.tahery = 100;
    foods.morog_polaw = 120;
    foods.veriany = 120;
    foods.singara = 15;
    foods.chomuca = 15;
    foods.chiken_roll = 60;
    foods.vegitable_roll = 50;

    printf("Please choose ITEMS : \n");
    printf("1.Tea\n 2.Coffee\n 3.Mountain_dew\n 4.Seven_up\n 5.Tahary\n 6.Morog Polaw\n 7.Veriany\n 8.Singara\n 9.Chomuca\n 10.Chiken Roll\n 11.Vegitable Roll\n");
    int menu;
    scanf("%d",&menu);
    int menu_1,menu_2,menu_3,menu_4,menu_5,menu_6,m;

    switch(menu){
            case 1:
                printf("you have selected Tea = %d\n",drinks.tea);
                scanf("%d",&menu_1);
                switch(menu_1){

                    case 2:
                        m = (drinks.tea + drinks.coffee);
                        printf("%d",m);
                        break;

                    case 3:
                        m = (drinks.tea + drinks.mauntaindew);
                        printf("%d",m);
                        break;

                    case 4:
                        m = (drinks.tea + drinks.seven_up);
                        printf("%d",m);
                        break;

                    case 5:
                        m = (drinks.tea + foods.tahery);
                        printf("%d",m);
                        break;

                    case 6:
                        m = (drinks.tea + foods.morog_polaw);
                        printf("%d",m);
                        break;

                    case 7:
                        m = (drinks.tea + foods.veriany);
                        printf("%d",m);
                        break;

                    case 8:
                        m = (drinks.tea + foods.singara );
                        printf("%d",m);
                        break;

                    case 9:
                        m = (drinks.tea + foods.chomuca);
                        printf("%d",m);
                        break;

                    case 10:
                        m = (drinks.tea + foods.chiken_roll);
                        printf("%d",m);
                        break;

                    case 11:
                        m = (drinks.tea + foods.vegitable_roll);
                        printf("%d",m);
                        break;
                    }


            case 2:
                printf("you have selected Tea = %d\n",drinks.coffee);
                scanf("%d",&menu_2);
                switch(menu_2){

                    case 2:
                        m = (drinks.coffee + drinks.coffee);
                        printf("%d",m);
                        break;

                    case 3:
                        m = (drinks.coffee + drinks.mauntaindew);
                        printf("%d",m);
                        break;

                    case 4:
                        m = (drinks.coffee + drinks.seven_up);
                        printf("%d",m);
                        break;

                    case 5:
                        m = (drinks.coffee + foods.tahery);
                        printf("%d",m);
                        break;

                    case 6:
                        m = (drinks.coffee + foods.morog_polaw);
                        printf("%d",m);
                        break;

                    case 7:
                        m = (drinks.coffee + foods.veriany);
                        printf("%d",m);
                        break;

                    case 8:
                        m = (drinks.coffee + foods.singara );
                        printf("%d",m);
                        break;

                    case 9:
                        m = (drinks.coffee + foods.chomuca);
                        printf("%d",m);
                        break;

                    case 10:
                        m = (drinks.coffee + foods.chiken_roll);
                        printf("%d",m);
                        break;

                    case 11:
                        m = (drinks.coffee + foods.vegitable_roll);
                        printf("%d",m);
                        break;
                    }

            case 3:
                printf("you have selected Tea = %d\n",drinks.mauntaindew);
                scanf("%d",&menu_3);
                switch(menu_3){

                    case 2:
                        m = (drinks.mauntaindew + drinks.coffee);
                        printf("%d",m);
                        break;

                    case 3:
                        m = (drinks.mauntaindew + drinks.mauntaindew);
                        printf("%d",m);
                        break;

                    case 4:
                        m = (drinks.mauntaindew + drinks.seven_up);
                        printf("%d",m);
                        break;

                    case 5:
                        m = (drinks.mauntaindew + foods.tahery);
                        printf("%d",m);
                        break;

                    case 6:
                        m = (drinks.mauntaindew + foods.morog_polaw);
                        printf("%d",m);
                        break;

                    case 7:
                        m = (drinks.mauntaindew + foods.veriany);
                        printf("%d",m);
                        break;

                    case 8:
                        m = (drinks.mauntaindew + foods.singara );
                        printf("%d",m);
                        break;

                    case 9:
                        m = (drinks.mauntaindew + foods.chomuca);
                        printf("%d",m);
                        break;

                    case 10:
                        m = (drinks.mauntaindew + foods.chiken_roll);
                        printf("%d",m);
                        break;

                    case 11:
                        m = (drinks.mauntaindew + foods.vegitable_roll);
                        printf("%d",m);
                        break;
                    }

            case 4:
                printf("you have selected Tea = %d\n",drinks.mauntaindew);
                scanf("%d",&menu_3);
                switch(menu_3){

                    case 2:
                        m = (drinks.mauntaindew + drinks.coffee);
                        printf("%d",m);
                        break;

                    case 3:
                        m = (drinks.mauntaindew + drinks.mauntaindew);
                        printf("%d",m);
                        break;

                    case 4:
                        m = (drinks.mauntaindew + drinks.seven_up);
                        printf("%d",m);
                        break;

                    case 5:
                        m = (drinks.mauntaindew + foods.tahery);
                        printf("%d",m);
                        break;

                    case 6:
                        m = (drinks.mauntaindew + foods.morog_polaw);
                        printf("%d",m);
                        break;

                    case 7:
                        m = (drinks.mauntaindew + foods.veriany);
                        printf("%d",m);
                        break;

                    case 8:
                        m = (drinks.mauntaindew + foods.singara );
                        printf("%d",m);
                        break;

                    case 9:
                        m = (drinks.mauntaindew + foods.chomuca);
                        printf("%d",m);
                        break;

                    case 10:
                        m = (drinks.mauntaindew + foods.chiken_roll);
                        printf("%d",m);
                        break;

                    case 11:
                        m = (drinks.mauntaindew + foods.vegitable_roll);
                        printf("%d",m);
                        break;
                    }

            case 5:
                printf("you have selected Tea = %d\n",drinks.mauntaindew);
                scanf("%d",&menu_3);
                switch(menu_3){

                    case 2:
                        m = (drinks.mauntaindew + drinks.coffee);
                        printf("%d",m);
                        break;

                    case 3:
                        m = (drinks.mauntaindew + drinks.mauntaindew);
                        printf("%d",m);
                        break;

                    case 4:
                        m = (drinks.mauntaindew + drinks.seven_up);
                        printf("%d",m);
                        break;

                    case 5:
                        m = (drinks.mauntaindew + foods.tahery);
                        printf("%d",m);
                        break;

                    case 6:
                        m = (drinks.mauntaindew + foods.morog_polaw);
                        printf("%d",m);
                        break;

                    case 7:
                        m = (drinks.mauntaindew + foods.veriany);
                        printf("%d",m);
                        break;

                    case 8:
                        m = (drinks.mauntaindew + foods.singara );
                        printf("%d",m);
                        break;

                    case 9:
                        m = (drinks.mauntaindew + foods.chomuca);
                        printf("%d",m);
                        break;

                    case 10:
                        m = (drinks.mauntaindew + foods.chiken_roll);
                        printf("%d",m);
                        break;

                    case 11:
                        m = (drinks.mauntaindew + foods.vegitable_roll);
                        printf("%d",m);
                        break;
                    }

            case 6:
                printf("you have selected Tea = %d\n",drinks.mauntaindew);
                scanf("%d",&menu_3);
                switch(menu_3){

                    case 2:
                        m = (drinks.mauntaindew + drinks.coffee);
                        printf("%d",m);
                        break;

                    case 3:
                        m = (drinks.mauntaindew + drinks.mauntaindew);
                        printf("%d",m);
                        break;

                    case 4:
                        m = (drinks.mauntaindew + drinks.seven_up);
                        printf("%d",m);
                        break;

                    case 5:
                        m = (drinks.mauntaindew + foods.tahery);
                        printf("%d",m);
                        break;

                    case 6:
                        m = (drinks.mauntaindew + foods.morog_polaw);
                        printf("%d",m);
                        break;

                    case 7:
                        m = (drinks.mauntaindew + foods.veriany);
                        printf("%d",m);
                        break;

                    case 8:
                        m = (drinks.mauntaindew + foods.singara );
                        printf("%d",m);
                        break;

                    case 9:
                        m = (drinks.mauntaindew + foods.chomuca);
                        printf("%d",m);
                        break;

                    case 10:
                        m = (drinks.mauntaindew + foods.chiken_roll);
                        printf("%d",m);
                        break;

                    case 11:
                        m = (drinks.mauntaindew + foods.vegitable_roll);
                        printf("%d",m);
                        break;
                    }

            case 7:
                printf("you have selected Tea = %d\n",drinks.mauntaindew);
                scanf("%d",&menu_3);
                switch(menu_3){

                    case 2:
                        m = (drinks.mauntaindew + drinks.coffee);
                        printf("%d",m);
                        break;

                    case 3:
                        m = (drinks.mauntaindew + drinks.mauntaindew);
                        printf("%d",m);
                        break;

                    case 4:
                        m = (drinks.mauntaindew + drinks.seven_up);
                        printf("%d",m);
                        break;

                    case 5:
                        m = (drinks.mauntaindew + foods.tahery);
                        printf("%d",m);
                        break;

                    case 6:
                        m = (drinks.mauntaindew + foods.morog_polaw);
                        printf("%d",m);
                        break;

                    case 7:
                        m = (drinks.mauntaindew + foods.veriany);
                        printf("%d",m);
                        break;

                    case 8:
                        m = (drinks.mauntaindew + foods.singara );
                        printf("%d",m);
                        break;

                    case 9:
                        m = (drinks.mauntaindew + foods.chomuca);
                        printf("%d",m);
                        break;

                    case 10:
                        m = (drinks.mauntaindew + foods.chiken_roll);
                        printf("%d",m);
                        break;

                    case 11:
                        m = (drinks.mauntaindew + foods.vegitable_roll);
                        printf("%d",m);
                        break;
                    }

            case 8:
                printf("you have selected Tea = %d\n",drinks.mauntaindew);
                scanf("%d",&menu_3);
                switch(menu_3){

                    case 2:
                        m = (drinks.mauntaindew + drinks.coffee);
                        printf("%d",m);
                        break;

                    case 3:
                        m = (drinks.mauntaindew + drinks.mauntaindew);
                        printf("%d",m);
                        break;

                    case 4:
                        m = (drinks.mauntaindew + drinks.seven_up);
                        printf("%d",m);
                        break;

                    case 5:
                        m = (drinks.mauntaindew + foods.tahery);
                        printf("%d",m);
                        break;

                    case 6:
                        m = (drinks.mauntaindew + foods.morog_polaw);
                        printf("%d",m);
                        break;

                    case 7:
                        m = (drinks.mauntaindew + foods.veriany);
                        printf("%d",m);
                        break;

                    case 8:
                        m = (drinks.mauntaindew + foods.singara );
                        printf("%d",m);
                        break;

                    case 9:
                        m = (drinks.mauntaindew + foods.chomuca);
                        printf("%d",m);
                        break;

                    case 10:
                        m = (drinks.mauntaindew + foods.chiken_roll);
                        printf("%d",m);
                        break;

                    case 11:
                        m = (drinks.mauntaindew + foods.vegitable_roll);
                        printf("%d",m);
                        break;
                    }

            case 9:
                printf("you have selected Tea = %d\n",drinks.mauntaindew);
                scanf("%d",&menu_3);
                switch(menu_3){

                    case 2:
                        m = (drinks.mauntaindew + drinks.coffee);
                        printf("%d",m);
                        break;

                    case 3:
                        m = (drinks.mauntaindew + drinks.mauntaindew);
                        printf("%d",m);
                        break;

                    case 4:
                        m = (drinks.mauntaindew + drinks.seven_up);
                        printf("%d",m);
                        break;

                    case 5:
                        m = (drinks.mauntaindew + foods.tahery);
                        printf("%d",m);
                        break;

                    case 6:
                        m = (drinks.mauntaindew + foods.morog_polaw);
                        printf("%d",m);
                        break;

                    case 7:
                        m = (drinks.mauntaindew + foods.veriany);
                        printf("%d",m);
                        break;

                    case 8:
                        m = (drinks.mauntaindew + foods.singara );
                        printf("%d",m);
                        break;

                    case 9:
                        m = (drinks.mauntaindew + foods.chomuca);
                        printf("%d",m);
                        break;

                    case 10:
                        m = (drinks.mauntaindew + foods.chiken_roll);
                        printf("%d",m);
                        break;

                    case 11:
                        m = (drinks.mauntaindew + foods.vegitable_roll);
                        printf("%d",m);
                        break;
                    }

            case 10:
                printf("you have selected Tea = %d\n",drinks.mauntaindew);
                scanf("%d",&menu_3);
                switch(menu_3){

                    case 2:
                        m = (drinks.mauntaindew + drinks.coffee);
                        printf("%d",m);
                        break;

                    case 3:
                        m = (drinks.mauntaindew + drinks.mauntaindew);
                        printf("%d",m);
                        break;

                    case 4:
                        m = (drinks.mauntaindew + drinks.seven_up);
                        printf("%d",m);
                        break;

                    case 5:
                        m = (drinks.mauntaindew + foods.tahery);
                        printf("%d",m);
                        break;

                    case 6:
                        m = (drinks.mauntaindew + foods.morog_polaw);
                        printf("%d",m);
                        break;

                    case 7:
                        m = (drinks.mauntaindew + foods.veriany);
                        printf("%d",m);
                        break;

                    case 8:
                        m = (drinks.mauntaindew + foods.singara );
                        printf("%d",m);
                        break;

                    case 9:
                        m = (drinks.mauntaindew + foods.chomuca);
                        printf("%d",m);
                        break;

                    case 10:
                        m = (drinks.mauntaindew + foods.chiken_roll);
                        printf("%d",m);
                        break;

                    case 11:
                        m = (drinks.mauntaindew + foods.vegitable_roll);
                        printf("%d",m);
                        break;
                    }

            case 11:
                printf("you have selected Tea = %d\n",drinks.mauntaindew);
                scanf("%d",&menu_3);
                switch(menu_3){

                    case 2:
                        m = (drinks.mauntaindew + drinks.coffee);
                        printf("%d",m);
                        break;

                    case 3:
                        m = (drinks.mauntaindew + drinks.mauntaindew);
                        printf("%d",m);
                        break;

                    case 4:
                        m = (drinks.mauntaindew + drinks.seven_up);
                        printf("%d",m);
                        break;

                    case 5:
                        m = (drinks.mauntaindew + foods.tahery);
                        printf("%d",m);
                        break;

                    case 6:
                        m = (drinks.mauntaindew + foods.morog_polaw);
                        printf("%d",m);
                        break;

                    case 7:
                        m = (drinks.mauntaindew + foods.veriany);
                        printf("%d",m);
                        break;

                    case 8:
                        m = (drinks.mauntaindew + foods.singara );
                        printf("%d",m);
                        break;

                    case 9:
                        m = (drinks.mauntaindew + foods.chomuca);
                        printf("%d",m);
                        break;

                    case 10:
                        m = (drinks.mauntaindew + foods.chiken_roll);
                        printf("%d",m);
                        break;

                    case 11:
                        m = (drinks.mauntaindew + foods.vegitable_roll);
                        printf("%d",m);
                        break;
                    }

            default:
                printf("Please select the correct ITEMS ");
            }

    getch();
    return 0;
}
