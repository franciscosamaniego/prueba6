#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = 0;
  while(argv[1][i] != 0) {
    printf("%d ", argv[1][i]);
    i++;
  }
  printf("\n");
  for(int j = 0; j < i/2; j++) {
    if(argv[1][j] != argv[1][i-j-1]) {
      printf("No es palindromo\n");
      return 1;
    }
  }
  printf("Es palindromo\n");
  return 0;
}
