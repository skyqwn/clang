// goto는 남아있지만 요즘엔 거의 쓰지않음;;

#include <stdio.h>

int main(void) {
    int nInput;

INPUT:
    printf("Input number : ");
    scanf("%d", &nInput);

    if (nInput < 0 || nInput > 10) {
        puts("0~10 사이 숫자를 입력해주세요.");
        goto INPUT;
    }

    puts("End");
    return 0;
}