#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    int marks;
};

int main() {
    struct Student s1;
    strcpy(s1.name, "Rahul");
    s1.age = 19;
    s1.marks = 88;

    printf("%s, %d, %d\n", s1.name, s1.age, s1.marks);
    return 0;
}
