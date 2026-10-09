#include <stdio.h>

// Function to find sum of two numbers
void sum() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
}

// Function to find factorial
void factorial() {
    int n;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial = %lld\n", fact);
}

// Function to check prime
void primeCheck() {
    int n, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime =0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is Prime\n", n);
    else
        printf("%d is Not Prime\n", n);
}

// Function to find largest of three numbers
void largest() {
    int a, b, c, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if (b > max)
        max = b;

    if (c > max)
        max = c;

    printf("Largest = %d\n", max);
}

int main() {
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Sum of two numbers\n");
        printf("2. Factorial\n");
        printf("3. Prime check\n");
        printf("4. Largest of three numbers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sum();
                break;

            case 2:
                factorial();
                break;

            case 3:
                primeCheck();
                break;

            case 4:
                largest();
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}