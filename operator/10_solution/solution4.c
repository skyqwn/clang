#include <stdio.h>

int main(void) {
    int input = 0;
    int total = 0;

    scanf("%d", &input);
    total += input;

    scanf("%d", &input);
    total += input;
    
    scanf("%d", &input);
    total += input;


    printf("Total: %d\n:", total);

    return 0;
}