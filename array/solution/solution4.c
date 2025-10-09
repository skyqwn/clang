// select sort

#include <stdio.h>

int main(void) {

    int aList[5] = {3, 5, 1, 2, 4};
    int idxMin = 0;
    int length = sizeof(aList) / sizeof(aList[0]);

    for(int i = 0; i < length - 1; ++i){
        idxMin = i;
        for( int j = i + 1; j < length; ++j) {
            if (aList[idxMin] > aList[j]) {
              idxMin = j;
            }
        }
        if(idxMin != i) {
            int tmp = aList[i];
            aList[i] = aList[idxMin];
            aList[idxMin] = tmp;
        }
    }

    // 결과 출력
    for (int i = 0; i < length ; ++i) {
        printf("%d\t", aList[i]);
    }


    return 0;
}