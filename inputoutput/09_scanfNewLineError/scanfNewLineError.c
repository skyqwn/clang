#include <stdio.h>

int main(void) {
    int nInput = 0;
    // scanf뒤에 \n을 입력하면 실행할때 엔터를 눌러고 끝나지를 않음
    // Scanf는 저장할 고ㅗㅇ간은 꼭 주소를 명시해야한 & 넣고 해야함
    scanf("%d\n", &nInput);
    // scanf_s("%d\n", &nInput);

    printf("%d\n", nInput);
    return 0;
}