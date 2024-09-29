#include <stdio.h>

int main(void){
    char chr1[] = "Hello";
    char *chr2 = chr1;

    chr2 = "World";

    printf("%s\n", chr1);
    printf("%s\n", chr2);

    return 0;
}
