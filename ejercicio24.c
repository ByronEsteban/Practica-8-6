#include <stdio.h>
#include <stdlib.h>
// Escribir un programa que declare dos matrices de 3 × 3: A y B y calcule una tercera matriz C = A + B.
// Imprimir C.
int main(int argc, char const *argv[]) {
  int a[3][3];
  int b[3][3];
  int c[3][3];
  //llenar la matriz a
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int r = rand()%11;
      a[i][j] = r;
    }
  }
  //llenar la matriz b
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int r = rand()%11;
      b[i][j] = r;
    }
  }
  //llenar la matriz c
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      c[i][j] = (a[i][j]+b[i][j]);
    }
  }

  //imprimir
  printf("Matriz a:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%02d ", a[i][j]);
    } printf("\n");
  }
  printf("Matriz b:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%02d ", b[i][j]);
    } printf("\n");
  }
  printf("Matriz c:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%02d ", c[i][j]);
    } printf("\n");
  }
  return 0;
}
