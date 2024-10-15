#include <stdio.h>

int main(){

    // Switch

    char yourNum;
    printf("Enter any alphabet between a to d: ");
    scanf("%c", &yourNum);

    switch(yourNum){
        case 'a':
        printf("You entred 1st alphabet\n");
        break;           // We need to use break such that after the particular case the upcoming cases dosen't gets printed.
        case 'b':
        printf("You entred 2nd alphabet\n");
        break;
        case 'c':
        printf("You entred 3rd alphabet\n");
        break;
        case 'd':
        printf("You entred 4th alphabet\n");
        break;
        default:
        printf("Noting matched\n");
    }
    return 0;
}