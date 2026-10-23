#include <stdio.h>
int main() {
    char str[] = "Madam";
    int len=0;
    while (str[len] != '\0') {
        len++;
    }
    int isPalindrome = 1; 
    for (int i = 0; i < len / 2; i++) {
        char c1 = str[i];
        char c2 = str[len - 1 - i];
        if (c1 >= 'A' && c1 <= 'Z') {
            c1 = c1 + 32;
        }
        if (c2 >= 'A' && c2 <= 'Z') {
            c2 = c2 + 32;
        }
        if (c1 != c2) {
            isPalindrome = 0; 
            break;
        }
    }
    if (isPalindrome == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
