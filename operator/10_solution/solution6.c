#include <stdio.h>

int main(void) {
    int score = 0;

    scanf("%d", &score);

    printf("%s\n",
        (score >= 80) ? "합격" : "불합격"
    );

    return 0;
}