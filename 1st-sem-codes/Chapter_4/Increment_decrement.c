#include <stdio.h>

int main(){
       
    // Increment

    int i = 5;
    printf("The value of i is %d\n", i); // i = 5

    i = i + 5; // i = 10
    printf("The value of i is %d\n", i);

    // i++ is a POST INCREMENT function (jab i++ aayega phele 'i' ka normal value print hoga uske bad increment hoga jo ke next time jab 'i' print hoga tab reflect karega)
    printf("The value of i is %d\n", i++); // i = 10    
    printf("The value of i is %d\n", i);  // i = 11

    // ++i is a PRE INCREMENT function (jab ++i aayega tab he 'i' ka value normal value se increment hoke print ho jayega)
    printf("The value of i is %d\n", ++i); // i = 12

    // Works same as i = i + 2
    i += 2;
    printf("The value of i is %d\n", i); // i = 14

    i *= 2;
    printf("The value of i is %d\n", i); // i = 28





    // Decrement

    int u;

    for(u=5; u; u--){
        printf("%d\n",u);
    }

    return 0;
}