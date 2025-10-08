/**
 * 사용자로부터 입력 받은 정수 중 가장 큰 수를 출력하는
 * 프로그램을 작성. 정수는 부호가 있는 32비트 정수로 한정하며
 * scanf함수로 한번에 세 값을 모두 입력 받아야 함.
 * 최댓값은 printf() 함수로 출력
 */

#include <stdio.h>

int main(void) {
    int a = 0, b = 0, c = 0;
    int result = 0;

    scanf("%d%d%d", &a, &b, &c);

    result = (a < b) ? b : a;
    result = (result < c) ? c : result;

    printf("MAX: %d", result);


    return 0;
}