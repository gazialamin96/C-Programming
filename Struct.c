#include <stdio.h>
#include <string.h>

struct students {
   char  name[100];
   int id;
   char program[100];
};

struct course{
    char c1[100];
    char c2[100];
    char c3[100];
};

int main() {

   struct students student_1,student_2,student_3;
   struct course course_1,course_2,course_3;
   int marks1,marks2,marks3;

   printf("please Enter your name : ");
   gets(student_1.name);
   printf("please Enter your Identification : ");
   scanf("%d",&student_1.id);
   printf("please Enter your program : ");
   gets(student_1.program);

   printf("please enter your course : ");
   gets(course_1.c1);
   printf("please enter marks of %s : ",course_1.c1);
   scanf("%d",&marks1);

   printf("please enter your 2n course : ");
   gets(course_2.c2);
   printf("please enter marks of %s : ",course_2.c2);
   scanf("%d",&marks2);

   printf("please enter your 3rd course : ");
   gets(course_3.c3);
   printf("please enter marks of %s : ",course_3.c3);
   scanf("%d",&marks3);

   int marks = ((marks1 + marks2 + marks3)/3);

   printf("%s",student_1.name);
   printf("%d",student_1.id);
   printf("%s",student_1.program);

   if(marks<50){
        printf("you are failed.");
   }
   else if(marks>=50 && marks<60){
            printf("%s grade is D : 2.25\n",student_1.name);
    }
    else if(marks>=60 && marks<=65){
            printf("%s grade is D+ : 2.50\n",student_1.name);
    }

    else if(marks>=66 && marks<=70){
            printf("%s grade is C : 2.75\n",student_1.name);
    }

    else if(marks>=71 && marks<=75){
            printf("%s grade is C+ : 3.00\n",student_1.name);
    }

    else if(marks>=76 && marks<=80){
            printf("%s grade is B : 3.25\n",student_1.name);
    }

     else if(marks>=81 && marks<=85){
            printf("%s grade is B+ : 3.50\n",student_1.name);
    }

     else if(marks>=86 && marks<=90){
            printf("%s grade is A : 3.75\n",student_1.name);
    }
     else if(marks>=91 && marks<=100){
            printf("%s grade is A+: 4.00\n",student_1.name);
    }
    else{
        printf("!You are not entered a numaric number");
    }


   return 0;
}
