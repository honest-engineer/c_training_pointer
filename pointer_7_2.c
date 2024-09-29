#include <stdio.h>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

int main(void) {
  char str[][4] = {
    "SUN",
    "MON",
    "TUE",
    "WED",
    "THU",
    "FRI",
    "SAT"
  };

  for(int i = 0; i < SIZE_OF_ARRAY(str); i++) {
    printf("%s\n", str[i]);
  }

  return 0;
}
