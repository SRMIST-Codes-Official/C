#include <stdio.h>

int main(){

    // integer variable
    // 2 ways to create  a variable:-

   int a;
   a = 5;

   printf("%d\n",a);

// &

    // int a = 6;      //Try to print it.

  
    // float 
    float b;
    b = 1.4;

    printf("%f\n",b);


    // character
    char myGrade; // myGrade is the variable name in which our character 'A' is stored.
    myGrade = 'A';  //Variable name 'A' must be in sigle inverted commas and it must be of one letter only.

    printf("%c\n",myGrade);

    // Declaring multiple variables at a time
    int d = 45, e = 75, f = 95;
    printf("%d%d%d\n", d,e,f);


    // Comment

    // Single line
    // Use "//" (double shash) for comenting any lines
    
    // Multi line
    // Use "/*" (single slash with star) for comenting multiple lines.


    // Taking input
    // syntax:
    // scanf("%variableType", &variable name);



    return 0;
}