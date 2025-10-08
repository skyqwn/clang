#include <stdio.h>

int main(void) {
    int input = 0;

    scanf("%d", &input);

    int hour = 0, min = 0, sec =0;

    hour = input / 3600;
    min = (input % 3600) / 60;
    sec = input % 60;
    
    printf("%02d:%02d:%02d\n", hour, min, sec);
    return 0;
}