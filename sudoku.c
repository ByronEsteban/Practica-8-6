#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int matriz[4][4];
  int seq[] ={1,2,3,4,5,6,7,8,9};
  //mezclar seq
  for (int i = 0; i < 200; i++) {
    int r = rand()%9;
    int s = rand()%9;
    int temp = seq[r];
    seq[r] =seq[s];
    seq[s] = temp;
  }
  //indice para sacar los numeros
  int k = 0;
  //llena con randoms los 9
  //y suma las filas
  for (int i = 0; i < 4; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      if (i != 3 && j != 3) {
        matriz[i][j] = seq[k++];
        sum += matriz[i][j];
      } else
      matriz[i][j] = sum;
    }
  }

  for (int i = 0; i < 3; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      if (j != 3) {
        sum += matriz[j][i];
      }
      else matriz[j][i] = sum;
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      printf("%02d ", matriz[i][j]);
    } printf("\n");
  }
  return 0;
}


//
// int sudoku[9] = {
//   "1","6","4",
//   "7","2","5",
//   "8","9","3"
// };
