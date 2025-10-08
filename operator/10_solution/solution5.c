/**
 * 사용자로부터 두 정수를 입력 받아 뺄셈을 수행하고 결과를 
 * 출력하는 프로그램을 작성. 단, 절대로 뺄셈 연산자를 사용하지 말고 
 * 비트 연산자를 이용해 구현.
 */

#include <stdio.h>

int main (void) {

    int a = 0, b = 0;
    int result = 0;
    scanf("%d%d", &a, &b);

    result = a + (~b + 1);
    printf("%d\n", result);
    return 0;
}