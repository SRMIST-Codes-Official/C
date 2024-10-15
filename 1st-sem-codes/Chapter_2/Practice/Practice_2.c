#include <stdio.h>

int main(){

    // Q1)What data type will 3.0/8 – 2 return?

    float a = 3.0/8 -2;
    printf("%f\n", a);



    // Q2) Write a program to check whether a number is divisible by 97 or not.

    int b = 595656;
    printf("The value of reaminder is: %d\n", b%97);


    // Q3)Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1 

    float x = 2;
    float y = 3;
    float z = 3;
    float k = 5;
    float result = 3*x/y-z+k;

    printf("The value of expression is: %f", result);
    
    //Steps:-
    // At first 3*x = 3*2 = 6
    // then 6/y = 6/3 = 2
    // then 2-z = 2-3 = -1
    // then -1+k = -1+5 = 4

    return 0;
}