#include <stdio.h>

int main(void){
    char str[] = "abcdefghijkl";
    char *cptr = str;
    int *iptr = str;

    printf("sizeof(char)  :%d\n", sizeof(char));
    printf("sizeof(int)   :%d\n", sizeof(int));

    printf("sizeof(char *):%d\n", sizeof(char *));
    printf("sizeof(int *) :%d\n", sizeof(int *));

    printf("cptr[V]  :%s\n", cptr);
    printf("iptr[V]  :%s\n", iptr);
    printf("cptr[A]  :%p\n", cptr);
    printf("iptr[A]  :%p\n", iptr);

    printf("cptr+1[V]:%s\n", cptr+1);
    printf("iptr+1[V]:%s\n", iptr+1);
    printf("cptr+1[A]:%p\n", cptr+1);
    printf("iptr+1[A]:%p\n", iptr+1);

    printf("cptr+1[V]:%s\n", (int *)cptr+1);
    printf("iptr+1[V]:%s\n", (char *)iptr+1);

    return 0;
}
