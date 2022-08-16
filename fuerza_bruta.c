#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define HASH 23cdc18507b52418db7740cbb5543e54

int main(int argc, char *argv[]) {
  char line[1000] = "";
  FILE *fp;
  system("rm temp.txt");
  fp = fopen("wordlist.txt", "r");
  while(fgets(line, 1000, fp) != NULL) {
    char command[100] = "";
    strcat(command, "md5sum <<< \"");
    int i = 0;
    while(line[i] != 0) {
      if(line[i] == '\n') line[i] = 0;
      i++;
    }
    strcat(command, line);
    strcat(command, "\" >> temp.txt");
    system(command);
  }
  // char *s = "abc1234";
  // char *t = "abc1234";
  // if(!strcmp(s, t)) //como el strcmp da 0 es falso y al poner el ! lo convierte en verdadero
  // printf("Son iguales\n");
  fclose(fp);
  return 0;
}
