#include <stdio.h>

int main(){
    
    // Do While loop

    int n,i = 0;
    printf("Enter n: ");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);

    
    return 0;
}