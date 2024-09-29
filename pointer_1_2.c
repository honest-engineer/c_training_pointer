#include <stdio.h>

int main(void) {
    int num;
    char chr;
    char str[5];

    num = 12345;
    chr = 'A';
    str[0] = 'a';
    str[1] = 'b';
    str[2] = 'c';
    str[3] = 'd';
    str[4] = '\0';

    printf("%d\n", num);
    printf("%c\n", chr);
    int i = 0;
    while(1){
        if (str[i] == '\0')
            break;
        printf("%c", str[i]);
        i++;
    }

    printf("\n----------\n");
    int *pnum;
    char *pchr;
    char *pstr;

    pnum = &num;
    pchr = &chr;
    pstr = &str[0];

    printf("%d\n", *pnum);
    printf("%c\n", *pchr);
    printf("%s\n", pstr);

    return 0;
}
