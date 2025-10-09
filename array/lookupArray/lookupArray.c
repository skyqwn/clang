/**
 * Lookup 배열
 * 
 * 1. 데이터를 검색 혹은 참조하기 위해 사용하는 배열
 * 2. 보통 기준에 따라 인덱스 값을 계싼하고 식별한 요소를 활용하는 구조
 * 3. 배열의 한 요소가 처리할 하나의 경우로 활용
 */

#include <stdio.h>

int main(void) {

    double aRate[10] = {
        0.0, 0.1, 0.25, // 1~3세 0%, 10%, 25%
        0.5, 0.5,       // 4~5세
        0.6, 0.65,      // 6~7세
        0.8, 0.82, 0.97 // 8_10세
    };

    int nAge = 0, nFee = 1000;

    printf("요금표\n");
    for(int i = 1; i <= 10; ++i) {
        printf("%d세 요금 : \t%d원\n",
            i,
            (int)(nFee * aRate[i - 1])
        );
    }
    putchar('\n');

    printf("나이를 입력하세요. : ");
    scanf("%d", &nAge);
    if (nAge < 1)
        nAge = 1;
    else if (nAge > 10)
        nAge = 10;
    printf("최종요금: %d원\n",
        (int)(nFee * aRate[nAge - 1])
    );
    putchar('\n');

    return 0;
}