#include <stdio.h>

int main(void) {
    // int nData = 0x11223344;
    // break point 잡고 lldb debug에서 memory read &nData를 찾아보면 
    // 0x16fdfe738: 44 33 22 11 00 00 00 00 70 e9 df 6f 01 00 00 00  D3".....p..o.... 
    // 뒤집어서 나옴
    int nData = 0x12345678;
    printf("%08X\n", nData);
    return 0;
}