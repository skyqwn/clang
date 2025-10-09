#include <stdio.h>

int main(void) {
    for (int j = 2; j < 10; ++j) {
        for(int i = 1; i <= 9; ++i) {
            printf("%d * %d = %d\n", j, i, j * i);
        }
        putchar('\n');
    }
    
    return 0;
}