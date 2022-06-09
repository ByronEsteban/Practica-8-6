#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Escribir un programa que declare y asigne valores a una matriz de 4 × 4. Imprimir el promedio de cada fila y cada columna.
int main(int argc, char const *argv[]) {
  int a[4][4];
  double promfil = 0;
  double promcol = 0;
  srand(time(NULL));
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int r = rand()%100;
      a[i][j] = r;
    }
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%d ", a[i][j]);
      promfil = promfil + a[i][j];
      promfil = promfil/4.00;
    } printf("%d\n", promfil);
  }
  return 0;
}
