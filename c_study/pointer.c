#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int a = 100;
    int *pInt = &a;
    *pInt = 300;
    a = 200;

    char *pStr = "test";
    char *cpyStr = pStr;

    pStr = (char *)malloc(strlen(pStr) + 1); // 왜 1을 더하는지?
    free(pStr);

    printf("%d\n", *pInt);
    printf("%s\n", cpyStr); // 왜 free했는데 남아 있는지?

    return 0;
}