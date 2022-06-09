#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  printf("De Morgan dice que %d + %d = %d * %d\n", n,m,n,m);
  printf("%d es igual a %d segun De Morgan\n", n+m, n*m);
  return 0;
}
