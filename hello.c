#include <stdio.h>

int main(void)
{
    // printf("Hello, World!\n");
    // return 0;

    int age = 0;
    char name[32] = { 0 };

    scanf("%d%*c", &age);
    gets(name);

    printf("%d세 %s\n", age, name);
    return 0;
}