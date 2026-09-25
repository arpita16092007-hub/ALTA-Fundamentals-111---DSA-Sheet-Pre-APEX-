//Write a program that takes a month number (1-12) and prints its season 
//(Winter, Summer, Monsoon, Autumn) using switch-case with intentional //
//all-through so multiple month cases share one season block.//


#include <stdio.h>

int main() {
    int month;
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 12:
        case 1:
        case 2:
            printf("Winter\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("Summer\n");
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            printf("Monsoon\n");
            break;
        case 10:
        case 11:
            printf("Autumn\n");
            break;
        default:
            printf("Invalid month number!\n");
    }
    return 0;
}
