#include <stdio.h>

int main(void) {
    int aList[5][5] = { 0 };
    int cnt = 0;
    int flag = 1;

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j){
            if(flag ){
                aList[i][j] = ++cnt;
            } else {
                aList[i][4 - j] = ++cnt;
            }
        }

        flag = !flag;
    }

    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            printf("%d\t", aList[i][j]);
        }
        putchar('\n');
    }

    return 0;
}