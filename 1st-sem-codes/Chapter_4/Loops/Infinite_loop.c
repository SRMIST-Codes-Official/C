#include <stdio.h>

int main(){
    
    // THIS BECOMES A INFINITE LOOP:-

    int i = 0;
    while (i<10){
        printf("Value of i is : %d\n",i);
    }
    
    // Science i = 0 is always less than 10, and we hae not set the value of i to increment,so i  = 0 is printed infinitely. 
    return 0;
}