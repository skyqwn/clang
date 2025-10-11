#include <stdio.h>
#include <stdlib.h>

//memcpy 가 내부적으로 하는일 
int main(void) {
    char szBuffer[12] = { "HelloWorld" };
    char* pszData = NULL;

    pszData = (char*)malloc(sizeof(char) * 12);
    for(int i = 0; i < 12; ++i) {
        pszData[i] = szBuffer[i];
    }

    puts(pszData);
    return 0;
}