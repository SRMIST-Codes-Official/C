#include <stdio.h>

int main(){

    // Q1) Write a C program to calculate area of a rectangleu using inputs supplied by the user. 

    int length, breadth,area;
    printf("Enter the length: ");
    scanf("%d",&length);
    printf("Enter the breadth: ");
    scanf("%d",&breadth);
    // scanf("%d%d", &length,&breadth);    //Can also use this.
    area = length*breadth;
    printf("The area is: %d", area);

    


    // Q2) Calculate the volume of a cylinder given its radius and height.

    float radius,height, area;
    printf("Enetr the radius: ");
    scanf("%f",&radius);
    printf("Enter the height: ");
    scanf("%f",&height);
    printf("The area of cylinder of radius %f is %f",radius, area = 4.0/3.0*3.14*radius*radius*height );
    // We enter 4.0/3.0 but not 4/3 for a reason. We don't get correct value from 4/3.




    // Q3) Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).

    float cel,fre;
    printf("Enter temp in celsius: ");
    scanf("%f",&cel);
    fre = (cel*9/5) + 32;
    printf("Your temp in fahrenheit is: %f",fre);
    
    return 0;
}