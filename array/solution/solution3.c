// bubble sort

#include <stdio.h>

int main(void) {
    int aList[5] = {1, 5, 3, 4, 2};
    int length = sizeof(aList)/ sizeof(aList[0]);
    int tmp = 0;

    for(int i = 0; i < length -1; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if(aList[i] > aList[j]) {
                tmp = aList[i];
                aList[i] = aList[j];
                aList[j] = tmp;
            }
        }
        for (int i = 0; i < length ; ++i) {
           printf("%d\t", aList[i]);
       }
       putchar('\n');
    }


    return 0;
}