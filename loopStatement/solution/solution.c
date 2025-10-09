#include <stdio.h>

int main(void){
    int input = 0;

    scanf("%d", &input);
    if (input < 1 || input >9) {
        puts("1~9 사이 정수를 입력하세요.");
        return 0;
    }

    int i = 0;
    while (i < input) {
        // putchar('*');
        printf("*\t");
        ++i;
    }
    putchar('\n');

    return 0;
}