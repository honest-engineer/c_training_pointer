#include <stdio.h>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

int main(void) {
  char *pstr[] = {
    "SUN",
    "MON",
    "TUE",
    "WED",
    "THU",
    "FRI",
    "SAT"
  };

  for(int i = 0; i < SIZE_OF_ARRAY(pstr); i++) {
    printf("%s\n", pstr[i]);
    printf("%c\n", *pstr[i]);
    printf("%p\n", pstr[i]);
    printf("\n");
  }

  return 0;
}
