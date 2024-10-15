#include <stdio.h>

int main(){
    
    // Q1) Write a program to print multiplication table of a given number n.

    int i,n;

    printf("Enter the no. whose table you want: ");
    scanf("%d",&n);

    for(i=0; i<=10; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }




    // Q2) Write a program to sum first ten natural numbers using while loop.

    int num = 1;
    int sum = 0;

    while(num<=10){
        sum += num;
        num++;
    }
        printf("The sum of first 10 natural no is: %d\n", sum);
    



    // Q3) Program to sum first ten natural numbers using 'do-while' and 'for' loop.
    
    //Using do-while:-
    int Num = 1;
    int Sum = 0;

    do{
        Sum += Num;
        Num++;
        printf("The sum of first 10 natural no is: %d\n", Sum);
    }
    while(Num<=10);


    //Using for:-
    int Sum2 = 0;

    for(Num=1; Num<=10; Num++){
        Sum2 += Num;
        printf("The sum of first 10 natural no us: %d\n", Sum2);
    }




    // Q4) Write a program to calculate the sum of the numbers occurring in the multiplication table of 8.

    int v = 1;
    int sum_eit = 0;

    while(v<=10){
        sum_eit += 8*v;
        v++;
        printf("The sum is: %d\n", sum_eit);
    }




    // Q5) Write a program to calculate the factorial of a given number using a for loop.

    // 5! = 5*4*3*2*1
    int no,m;
    int product = 1;

    printf("Enter the no whose factiorial you want: ");
    scanf("%d", &no);

    for(m=1; m<no; m++){
        product *= m;
    }
    printf("The factorial is: %d", product);



    return 0;
}