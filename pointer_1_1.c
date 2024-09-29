#include <stdio.h>

int main(void) {
    char chr = 'A';
    printf("chr   :%c\n", chr);
    printf("&chr  :%p\n", &chr);

    char *pchr = &chr;
//    char *pchr = 0x7ffe19eb2b67;
    printf("*pchr :%c\n", *pchr);

    return 0;
}
