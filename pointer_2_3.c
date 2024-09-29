#include <stdio.h>

char *str1 = "Initial";
char *str2 = "Initial";
// 文字列“Initial”の先頭アドレスをポインタ変数に格納

void func1(void) {
    char *str = "func1";
    str1 = str;
//    printf("[%s] str1:%s\n", __func__, str1);
}

void func2(void) {
    char str[10] = "func2";
    str2 = &str[0];
//    printf("[%s] str2:%s\n", __func__, str2);
}

int main(void) {
    printf("[%s] str1:%s\n", __func__, str1);
    printf("[%s] str2:%s\n", __func__, str2);
    printf("[%s] --------------------\n", __func__);
    func1();
    func2();
    printf("[%s] --------------------\n", __func__);
    printf("[%s] str1:%s\n", __func__, str1);
    printf("[%s] str2:%s\n", __func__, str2);
    return 0;
}
