#include <stdio.h>

int main(){
    
    // For loop

// Syntax:-
    // for(initialize;test/condition; incerement or dedcrement){
         //code;
    // }
    
    int i,n;

    printf("Enter the value up till which you want to print: ");
    scanf("%d",&n);

    for(i=0; i<=n; i++){
        printf("%d\n",i);
    }

    return 0;
}