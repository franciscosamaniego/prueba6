#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int m = atoi(argv[1]);
  char *months[] = {
    "",
    "Enero",
    "Febrero",
    "Marzo",
    "Abril",
    "Mayo",
    "Junio",
    "Julio",
    "Agosto",
    "Septiembre",
    "Octubre",
    "Noviembre",
    "Diciembre",
  };
  if(m < 1 || m > 12) {
    printf("Papa, son 12 los meses\n");
  }
  printf("%s\n", months[m]);
  return 0;
}
