#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que simule lo que se conoce como “caminos aleatorios”. Usar una matriz de n ́umeros enteros de 15×15 inicialmente llena de ceros. Poner un 1 en el centro de la matriz e ir llenando con unos representando los pasos del “caminante”. La caminata termina cuando se sale de la matriz original. El caminante puede dar un paso a la vez a la izquierda, derecha, arriba o abajo. Pero no puede volver sobre sus pasos. Imprimir la matriz que representa la caminata al terminar.
int main(int argc, char const *argv[]) {
  int a[15][15];
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      if (i == 7 && j== 7) {
        a[i][j]= 1;
      } else a[i][j]=0;
    }
  }
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      printf("%d ", a[i][j]);
    } printf("\n");
  }
  return 0;
}
