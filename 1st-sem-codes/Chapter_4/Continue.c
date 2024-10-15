#include <stdio.h>

int main(){
    
    // Continue

    // Using for loop
    int i;

    for(i=0; i<10; i++){
        if(i==5){
            continue;
        }
        printf("The value of i is: %d\n",i);
    }

    //Using while loop
    int u = 0;

    while(u<10){
        if(u == 5 || u == 8){
            u++;
            continue;
        }
        printf("The valule of u is: %d\n",u);
        u++;
    }



    
    return 0;
}