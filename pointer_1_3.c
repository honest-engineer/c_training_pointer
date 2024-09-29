#include <stdio.h>

int main(void) {
    int num[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    char str[] = "abcde"; //{'a', 'b', 'c', 'd', 'e', '\0'}
    int *pnum;
    char *pstr;

    pnum = num; //&num[0]
    pstr = str; //&str[0]

    printf("%d\n", *pnum);
    printf("%c\n", *pstr);
    printf("%s\n", pstr);

    pnum += 1;
    pstr += 1;
    printf("----------\n");
    printf("%d\n", *pnum);
    printf("%c\n", *pstr);

    pnum += 3;
    pstr += 3;
    printf("----------\n");
    printf("%d\n", *pnum);
    printf("%c\n", *pstr);

    pnum -= 2;
    pstr -= 2;
    printf("----------\n");
    printf("%d\n", *pnum);
    printf("%c\n", *pstr);

    return 0;
}
