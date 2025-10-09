#include <stdio.h>

int main(void) {
    int aList[3][4] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    // --- 각 행의 합 ---
    for (int i = 0; i < 2; ++i) {
        int sum = 0;
        for (int j = 0; j < 3; ++j) {
            sum += aList[i][j];
        }
        aList[i][3] = sum; // 마지막 열에 행의 합 저장
    }
    // --- 각 열의 합 ---
    for (int j = 0; j < 4; ++j) {
        int sum = 0;
        for (int i = 0; i < 2; ++i) {
            sum += aList[i][j];
        }
        aList[2][j] = sum; // 마지막 행에 열의 합 저장
    }

    

    // --- 출력 ---
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("%d\t", aList[i][j]);
        }
        printf("\n");
    }

    return 0;
}
