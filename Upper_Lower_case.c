#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter any upper case or lower case Alphabet : ");
    scanf("%c",&ch);

    if(ch>= 'A' && ch<='Z'){
        printf("It's a upper case Alphabet = %c", ch);
    }
    else if(ch>='a' && ch<='z'){
        printf("It's a lower case Alphabet =%c", ch);
        }
    else{
        printf("not a upper or lowercase Alphabet ");
    }
    return 0;
}
