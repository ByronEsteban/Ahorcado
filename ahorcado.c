#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char a;
  printf("Bienvenido al MEJOR ahorcado del mundo. Poné una letra. 7 intentos:\n");
  char *palabra = "almibar";

  char *dibujito = " ____\n"
                   "|    |\n"
                   "|\n"
                   "|\n"
                   "|\n"
                   "|____\n";
  int c;
  int i = 0;
  while (i < 6) {
    scanf("%s", &a);
    int j = 0;
    while (palabra[j] != '\n') {
      if (a == palabra[j]) {
        printf("Buena\n");
        break;
      }
      j++;
    }
    if (palabra[j] == '\n') {
      printf("No era esa\n");
      i++;
    }
    printf("%d\n", i);
  }
  printf("%s\n", dibujito);
  return 0;
}
