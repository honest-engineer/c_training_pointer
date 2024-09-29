#include <stdio.h>

void func1(void);
void func2(void);
void func3(void);

void func1(void) {
    printf("Start %s\n", __func__);
    func3();
    printf("End %s\n", __func__);
}

void func2(void) {
    printf("Start %s\n", __func__);
    printf("End %s\n", __func__);
}

void func3(void) {
    printf("Start %s\n", __func__);
    printf("End %s\n", __func__);
}

int main(void) {
    printf("Start %s\n", __func__);
    func1();
    func2();
    printf("End %s\n", __func__);
    return 0;
}
