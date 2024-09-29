#include <stdio.h>

void func(int try) {
    int num = 0;
    num++;
    printf("[%s] try:%d num:%d\n", __func__, try, num);
}

int main(void) {
    int i = 0;
    do {
        i++;
        func(i);
    } while(i < 3);
}
