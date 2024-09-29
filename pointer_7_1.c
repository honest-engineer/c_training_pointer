#include <stdio.h>

int main(void) {
  char str[7][4] = {
    "SUN", //{'S', 'U', 'N', '\0'}
    "MON", //{'M', 'O', 'N', '\0'}
    "TUE", //{'T', 'U', 'E', '\0'}
    "WED", //{'W', 'E', 'D', '\0'}
    "THU", //{'T', 'H', 'U', '\0'}
    "FRI", //{'F', 'R', 'I', '\0'}
    "SAT"  //{'S', 'A', 'T', '\0'}
  };

  for(int i = 0; i < 7; i++) {
    for(int j = 0; j < 4; j++) {
        printf("%c", str[i][j]);
    }
    printf("\n");
  }

  return 0;
}
