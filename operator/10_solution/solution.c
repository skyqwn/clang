#include <stdio.h>

int main(void) {
    int a = 0, b = 0;

    scanf("%d%d", &a, &b);

    double avg = 0.0;
    avg = (a + b) / 2.0;
    printf("%f", avg);

    return 0;
}