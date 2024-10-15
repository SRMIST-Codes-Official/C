#include <stdio.h>

int main(){

    // if statement

    int age = 15;

    if (age>10){
        printf("Your age is greater than 10.\n");
    }

    if(age%5 ==0){
        printf("Your age is divisible by 5.\n");
    }

    // if else statement

    int Age = 20;

    if(Age>25){
        printf("Your age is greater than 25.\n");
    }

    else{
        printf("Your age is less than 25.\n");
    }


    // Else if

    int AGE = 49;

    if(AGE>60){
        printf("You can drive and you are older\n");
    }
    else if (AGE>45)
    {
        printf("You can drive and you are elder\n");
    }
    else if (AGE>18)
    {
        printf("You can drive\n");
    }
    else{
        printf("You cannot drive\n");
    }

    
    return 0;
}