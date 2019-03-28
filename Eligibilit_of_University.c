#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///without user input
    /**
    int Maths=65,Phy=55,Chem=50;

    int total=(Maths+Phy+Chem);
    printf("Marks in Maths>=%d\n",Maths);
    printf("Marks in Phy>=%d\n",Phy);
    printf("Marks in Chem>=%d\n",Chem);
    printf("Total in all three subject>=%d\n",total);
    */
    ///with user input
    int Maths,Phy,Chem;
    printf("Emter the number of Maths : ");
    scanf("%d",&Maths);

    printf("Emter the number of Phy : ");
    scanf("%d",&Phy);

    printf("Enter the number of Chem : ");
    scanf("%d",&Chem);

    int Total=Maths+Phy+Chem;

    printf("Marks in Maths >=%d\nMarks in Phy >=%d\nMarks in Chem>=%d\nTotal in all three Subject >=%d\n",Maths,Phy,Chem,Total);

    return 0;
}


