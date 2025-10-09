#include <stdio.h>

int main(void) {
    int aList[5] = {3,4,5,2,1};

    int length = sizeof(aList)/sizeof(aList[0]);

    for (int i = 1; i < length; ++i){
        if(aList[0] > aList[i]) {
            int tmp = aList[0];
            aList[0] = aList[i];
            aList[i] = tmp;
        }
    }

    for (int i = 0; i < length ; ++i) {
        printf("%d\t", aList[i]);
    }
    putchar('\n');

    return 0;
}