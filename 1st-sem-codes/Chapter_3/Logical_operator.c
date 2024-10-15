#include <stdio.h>

int main(){

    // All type of logical operator

    int a = 1, b= 0;
    printf("The value a and b is:%d\n", a&&b);  //Both true then '1' otherwise '0'
    printf("The value a or b is:%d\n", a||b);  //Any one true then '1', both false then '0'
    printf("The value not of a is:%d\n", !a);  //Opposite value is printed
    printf("The value not of b is:%d\n", !b);  //Opposite value is printed
    
    //WON'T BE PRINTED SCIENCE IT'S NOT TRUE
    if(a&&b){
        printf("Both are true\n");  
    }
    
    if(a||b){
        printf("Either of a or b is true\n");
    }
    return 0;
}