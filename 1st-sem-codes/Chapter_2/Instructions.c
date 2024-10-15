#include <stdio.h>

int main(){

    // To do division 

    float a = 9;
    int b = 2;
    float c = a/b;
    printf("The value of a/b is: %f\n",c);


    // Changing variable type
    // Typecasting.

    int n = 78;
    float m = 85.84;

    n = (int) m;
    printf("%d \n",n);  // We convert 'm' into integer and value of 'm' is stored in 'n'.

    return 0;
}