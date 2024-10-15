#include <stdio.h>

int main(){
    
    // Break

    int i;

    for(i=0; i<1000; i++){
        printf("the value of i is: %d\n",i);

        if(i == 5){
            break;         // Jaise he 'break' aa gaya means IMMEDEATELY EXIT THE LOOP, irrespective of the condition of the loop.
        }
    }
    return 0;
}