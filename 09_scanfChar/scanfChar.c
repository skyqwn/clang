#include <stdio.h>

int main(void) {
    // char ch = 0;
    // scanf("%c", &ch);
    // printf("입력한 문자는 %c 입니다.\n", ch);

    char szBuffer[4] = { 0 };
    //나는 지금 mac을 사용중이라 이렇게 못씀..
    // scanf_s("%4c", szBuffer, _countof(szBuffer));
    // printf("%c%c%c%c\n", 
    //     szBuffer[0], szBuffer[1], szBuffer[2], szBuffer[3]);

    scanf("%4c", szBuffer);
    printf("입력한 문자들: %c%c%c%c\n",
           szBuffer[0], szBuffer[1], szBuffer[2], szBuffer[3]);
    return 0;

    
}