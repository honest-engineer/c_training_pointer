#include <stdio.h>
#include <string.h>

void func(char *message, int size) {
    char str[size];
    memset(str, '\0', size);
    strncpy(str, message, size);
    printf("[%s] %s\n", __func__, str);
}

int main(void) {
    char message[] = "Hello World!";
    func(message, strlen(message));
    return 0;
}
