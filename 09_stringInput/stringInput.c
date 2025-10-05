#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // char szBuffer[32] = { 0 };

    // scanf_s("%s", szBuffer, (unsigned)_countof(szBuffer));
    // printf("%s\n", szBuffer);

    // char szBufferLeft[32] = { 0 };
    // char szBufferRight[32] = { 0 };

    // scanf_s("%s%s",
    //     szBufferLeft, (unsigned)_countof(szBufferLeft),
    //     szBufferRight, (unsigned)_countof(szBufferRight)
    // );
    // printf("%s %s \n", szBufferLeft, szBufferRight);
    // return 0;

    char szBuffer[32] = { 0 };

    // 단일 문자열 입력 (공백 전까지만 읽음)
    scanf("%31s", szBuffer); // 최대 31글자 (마지막은 '\0' 자동)
    printf("%s\n", szBuffer);

    // 두 문자열 입력
    char szBufferLeft[32] = { 0 };
    char szBufferRight[32] = { 0 };

    scanf("%31s%31s", szBufferLeft, szBufferRight);
    printf("%s %s\n", szBufferLeft, szBufferRight);

    return 0;
}