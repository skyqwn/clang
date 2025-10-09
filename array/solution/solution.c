#include <stdio.h>

int main(void) {
    int nMax = 0;
    int aList[5] = {50, 40 ,10, 50 ,20};

    int length = sizeof(aList) / sizeof(aList[0]);

    nMax = aList[0];
    for (int i = 0; i < length; ++i) {
        if(aList[i] > nMax) {
            nMax = aList[i];
        }
    }

    printf("Max: %d\n", nMax);
    return 0;
}