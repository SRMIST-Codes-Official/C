#include <stdio.h>

int main(){
    
    // Q7f) Write a program to determine whether a character entered by the user is lowercase or not. 

    char ch;
    printf("Enter your character: ");
    scanf("%c",&ch);
    printf("Value of your character is: %d\n",ch);

    if(ch>=97 && ch<=122){
        printf("Your character is lowercase\n");
    }    
    else{
        printf("Your character is not a lowercase\n");
    }

    return 0;
}