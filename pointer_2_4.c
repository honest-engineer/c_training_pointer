#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *str1 = "Initial";

void func1(void) {
    char *str = (char*)malloc(sizeof(char) * 8);
    if (str == NULL) {
        return;
    }
    memset(str, '\0', 8);
    strncpy(str, "func1", 5);
    str1 = str;
}

void func2(void) {
    if (str1 != NULL) {
        free(str1);
        str1 = NULL;
    }
}

int main(void) {
    printf("[%s] str1:%s\n", __func__, str1);
    printf("[%s] --------------------\n", __func__);
    func1();
    printf("[%s] --------------------\n", __func__);
    printf("[%s] str1:%s\n", __func__, str1);
    func2();
    return 0;
}
