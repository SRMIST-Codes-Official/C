#include <stdio.h>

int main(){

    // Non Zero value in if condition.

    if(3){
        printf("This statement is executed\n");
    }

    if('c'){
        printf("This is also executed\n");  // We can also use single characters.
    }

    // NOT EXECUTES SCIENCE IT HAS A '0' VALUE
    if(0){
        printf("This statment is NOT executed\n");
    }

    return 0;
}