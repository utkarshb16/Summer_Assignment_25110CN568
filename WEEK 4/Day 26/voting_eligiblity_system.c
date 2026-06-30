#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n----- Result -----\n");

    if(age >= 18)
        printf("%s is eligible to vote.\n", name);
    else
        printf("%s is NOT eligible to vote.\n", name);

    return 0;
}