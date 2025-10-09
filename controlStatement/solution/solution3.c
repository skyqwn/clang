#include <stdio.h>

int main(void) {
    int cost = 1000, age = 0;

    scanf("%d", &age);

    if(age < 4) {
        cost *= 0;
    } else if (age <= 13) {
        cost *= 0.5;
    } else if (age <= 19) {
        cost *= 0.75;
    } else if( age <= 20) {
        cost *= 1;
    }

    printf("나이: %d, 요금: %d\n", age, cost);

    return 0;
}