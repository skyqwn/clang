/**
 * 사용자로부터 입력 받은 정수 중 가장 큰 수를 출력하는 프로그램을 작성.
 * 정수는 부호가 있는 32비트 정수로 한정하며 scanf 함수로 한 번에 한 값만 입력
 * 받고 내부적으로 최댓값을 계속 갱신하는 구조로 작성.
 */

#include <stdio.h>

int main(void) {
    int max = 0, input = 0;

    scanf("%d", &input);
    max = input;

    scanf("%d", &input);
    max = (max > input) ? max : input;
    
    scanf("%d", &input);
    max = (max > input) ? max : input;
    
    printf("MAX: %d\n", max);
}