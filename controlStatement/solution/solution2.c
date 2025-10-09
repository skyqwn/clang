#include <stdio.h>

int main(void) {
    int a = 1000;
    int age = 0;
    

    scanf("%d", &age);

    if(age > 20) {
        age = 20;
        a = 1000;
    }

    if(age < 20) {
        a = a * 0.75;
    }

    printf("나이: %d, 최종요금: %d\n", age, a);

    return 0;
}