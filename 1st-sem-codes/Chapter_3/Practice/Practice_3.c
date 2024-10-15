#include <stdio.h>

int main(){
    
    // Q1) Write a program to find grade of a student given his marks based on below: 
    // 90 – 100 => A 
    // 80 – 90 => B 
    // 70 – 80 => C 
    // 60 – 70 => D 
    // 50 – 60 => E 
    // <50 => F

    char grade;
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks<=100 && marks>=90){
        grade = 'A';
        printf("Your grade is: %c\n",grade);    //ALSO I CAN WRITE:- if(....){printf("Your grade is: A")}    WE DON'T REALLY NEED CHAR.
    }
     else if(marks<=89 && marks>=80){
        grade = 'B';
        printf("Your grade is: %c\n",grade);

    }
    else if(marks<=79 && marks>=70){
        grade = 'C';
        printf("Your grade is: %c\n",grade);
    }
    else if(marks<=69 && marks>=60){
        grade = 'D';
        printf("Your grade is: %c\n",grade);
    }
    else if(marks<=59 && marks>=50){
        grade = 'E';
        printf("Your grade is: %c\n",grade);
    }
    else if(marks<=49){
        grade = 'F';
        printf("Your grade is: %c\n",grade);
    }
    else{
        printf("Enter valid marks.\n");
    }




    // Q2) What will be the output of this program?
    //   int a = 10; 
    //   if (a = 11){
    //   printf("I am 11"); 
    //   }
    //   else{
    //   printf("I am not 11"); 
    //   }

    // THIS PRINTS I AM 11 BECAUSE:-
    // IN 'if' WE WROTE if(a=11) WE DIDN'T USE == SO BY USING = WE ASSIGNED A NEW VALUE TO a AS 11
    
    
    // CORRECT CODE:-

    int x = 10; 
    if (x == 11){
    printf("I am 11\n"); 
    }
    else{
    printf("I am not 11\n"); 
    }




    // Q3) Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user. 


    int a,b,c;
    printf("Enter your marks in a: ");
    scanf("%d",&a);
    printf("Enter your marks in b: ");
    scanf("%d",&b);
    printf("Enter your marks in c: ");
    scanf("%d",&c);

    if(a<33 || b<33 || c<33){
        printf("You are fail.\n");
    }
    else if((a+b+c)/3 < 40){
        printf("You are fail.\n");
    }
    else{
        printf("You are pass.\n");
    }




    // Q4) Calculate income tax paid by an employee to the government as per the slabs mentioned below: 
    // Income Slab                  Tax     
    // 2.5 – 5.0L                    5%           
    // 5.0L - 10.0L                  20%       
    // Above 10.0L                   30%    
    // Note that there is no tax below 2.5L. Take income amount as an input from the user. 
   

    float income,tax;
    printf("Enter your income in lakhs: ");
    scanf("%f", &income);

    if(income<2.5){
        tax = 0;
    }
    else if(income>= 2.5 && income<=5.0){
        tax = 0.05 * (income - 2.5);
    }
    else if(income > 5.0 && income<=10.0){
        tax = 0.05 * (5.0 - 2.5) + 0.2 * (income - 5.0);
    }
    else if(income > 10){
        tax = 0.05 * (5.0 - 2.5) + 0.2 * (10.0 - 5.0) + 0.3 * (income - 10.0);
    }
    printf("Tax to be paid is %f\n", tax);




    // Q5) Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user. 
    

    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if((year%4 == 0 && year%100 != 0) || year%400 == 0){
        printf("This year is a leap year\n");
    }
    else{
        printf("This is not a leap year\n");
    }


    // Q6) Write a program to find greatest of four numbers entered by the user.


    int p,q,r,s;
    printf("Enter p: \n");
    printf("Enter q: \n");
    printf("Enter r: \n");
    printf("Enter s: \n");
    scanf("%d%d%d%d", &p,&q,&r,&s);

    if(p>q && p>r && p>s){
        printf("p is the greatest\n");
    }
    else if(q>p && q>r && q>s){
        printf("q is the greatest\n");
    }
    else if(r>p && r>q && r>s){
        printf("r is the greatest\n");
    }
    else{
        printf("s is the greatest\n");
    }

    return 0;
}