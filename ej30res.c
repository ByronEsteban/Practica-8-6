#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int grilla[15][15];
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      grilla[i][j]=0;
    }
  }
  //posicion del caminante
  int x = 7;
  int y = 7;
  int k = 1;
  grilla[x][y]= k;
  for (int i = 0; i < 30; i++) {
    int r = rand()%4;
    if (r == 0 && grilla[x+1][y] == 0) {x++; k++;};
    if (r == 1 && grilla[x][y+1] == 0) {y++; k++;};
    if (r == 2 && grilla[x-1][y] == 0) {x--; k++;};
    if (r == 3 && grilla[x][y-1] == 0) {y--; k++;};
    grilla[x][y]= k;
  }
  for (int i = 0; i < 15; i++) {
    for (int j = 0; j < 15; j++) {
      printf("%02d ", grilla[i][j]);
    } printf("\n");
  }

  return 0;
}
