#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Simple Quiz =====\n");

    printf("\n1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\n2. C Language was developed by?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\n3. 10 + 20 = ?\n");
    printf("1. 20\n2. 25\n3. 30\n4. 40\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\n===== Result =====\n");
    printf("Your Score: %d/3\n", score);

    return 0;
}