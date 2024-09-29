#include <stdio.h>
#include <stdlib.h>

int gl;
static int st;

static int sfunc(void)
{
  return 0;
}

void func(int n);
int main(void);

void func(int n)
{
    int i;
    printf("[%s]スタック領域(引数n)のアドレス        :%p\n", __func__, &n);
    printf("[%s]スタック領域(ローカル変数i)のアドレス:%p\n", __func__, &i);
}

int main(void)
{
    int *p = (int*)malloc(sizeof(int) * 1);
    int j;

    printf("[%s]テキスト領域(main)のアドレス         :%p\n", __func__, main);
    printf("[%s]テキスト領域(func)のアドレス         :%p\n", __func__, func);
    printf("[%s]静的領域(global gl)のアドレス        :%p\n", __func__, &gl);
    printf("[%s]静的領域(static st)のアドレス        :%p\n", __func__, &st);
    printf("[%s]静的領域(sfunc)のアドレス            :%p\n", __func__, sfunc);
    printf("[%s]ヒープ領域(p)のアドレス              :%p\n", __func__, p);

    func(1);
    printf("[%s]スタック領域(ローカル変数j)のアドレス:%p\n", __func__, &j);

  return 0;
}
