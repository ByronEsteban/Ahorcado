#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int choice;
  FILE *fp;
  char line[1000];
  fp = fopen("trivia.txt", "r");
  while(1) {
  printf("Queres jugar a la trivia de tu vida?\n");
  printf("1) Si\n");
  printf("2) No\n");
  scanf("%d", &choice);
  switch (choice) {
    case 1:
        printf("Perfecto!\n");
        printf("%d° Pregunta: Donde nacio Messi?\n", i);
        printf("1)Rosario\n");
        printf("2)Buenos Aires\n");
    case 2:
    exit(0);
    default:
    printf("Elegi una opcion que este en la pantalla\n");
  }
}
  return 0;
}
