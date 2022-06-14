#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  //strcmp --> string compare
  //devuelve 0 si los dos string son iguales
  char *busqueda = argv[1];
  char *palabras[] = {
    "Albarez",
    "Farfan",
    "Grassi",
    "Cavalcanti",
    "Lesta"
  };
  for (int i = 0; i < 5; i++) {
    if (strcmp(palabras[i], busqueda) == 0) {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("-1\n");
  return 1;
}
